#include "Level.h"
#include "levels/Level1_1.cpp"
#include <iostream>

#ifndef ANGRYBIRDSTEST_H
#define ANGRYBIRDSTEST_H

#define DEGTORAD 0.0174532925199432957f
#define RADTODEG 57.295779513082320876f

#define BLOCKCOUNT 6

#define XLAUNCHORIG -50.0f
#define YLAUNCHORIG 18.0f

#define KEYFACTOR 0.5f

class TrajectoryRayCastClosestCallback : public b2RayCastCallback
{
public:
    TrajectoryRayCastClosestCallback(b2Body* ignoreBody) : m_hit(false), m_ignoreBody(ignoreBody) {}

    float32 ReportFixture(b2Fixture* fixture, const b2Vec2& point, const b2Vec2& normal, float32 fraction)
    {
        if ( fixture->GetBody() == m_ignoreBody )
            return -1;

        m_hit = true;
        m_point = point;
        m_normal = normal;
        return fraction;
    }

    b2Body* m_ignoreBody;
    bool m_hit;
    b2Vec2 m_point;
    b2Vec2 m_normal;
};

class AngryBirdsTest : public Test
{
private:
	static int blocks[BLOCKCOUNT][4];

public:
        
    b2Body* currentBird;
	float xLaunch;
	float yLaunch;
        
    AngryBirdsTest() 
    {
        /*std::string testStr = "foo";
        //Shape testShape("SHAPE");
        //Material testMaterial('0',1,1,1,1,1);
        Object* testObject = new Bird(testStr,new Material('0',1,1,1,1,1), new Shape("SHAPE"),1337,testStr,1,1);
        
        std::cout<<testObject->score<<std::endl;*/
        
		Level level = Level1_1();        
        
        // Give initial starting velocity vector
		xLaunch = 60.0f;
		yLaunch = 20.0f;
		
        // Make the ground
		b2BodyDef bd;
		b2Body* ground = m_world->CreateBody(&bd);
		b2Body* platform = m_world->CreateBody(&bd);
            
		b2EdgeShape groundShape;
		groundShape.Set(b2Vec2(-1000.0f, 0.0f), b2Vec2(1000.0f, 0.0f));
		ground->CreateFixture(&groundShape, 0.0f);

		for (vector<LevelObject*>::iterator l = level.objects.begin(); l != level.objects.end(); ++l)
		{
			Object* object = (*l)->object;
			//Shape* shape = (*object)->;
			b2BodyDef myBodyDef;
            myBodyDef.type = b2_dynamicBody; 
            myBodyDef.position.Set(blocks[i][2], blocks[i][3]);
            myBodyDef.angle = 0;
            //myBodyDef.linearDamping = 0.1f;
            b2Body* dynamicBody = m_world->CreateBody(&myBodyDef);
                
            b2PolygonShape boxShape;
            boxShape.SetAsBox(blocks[i][0],blocks[i][1]);

            b2FixtureDef boxFixtureDef;
            boxFixtureDef.shape = &boxShape;
            boxFixtureDef.density = 2.0f;
			boxFixtureDef.friction = 1.0f;
			boxFixtureDef.restitution = 0.0f;
            dynamicBody->CreateFixture(&boxFixtureDef);
		}
		/* Old Code for blocks
		// Make Level 1-1 platform
		b2EdgeShape platformShape;
		platformShape.Set(b2Vec2(50.0f, 4.0f), b2Vec2(74.0f, 4.0f));
		platform->CreateFixture(&platformShape, 0.0f);
		
		}

		// Make blocks
		int blocksSize = sizeof( blocks ) / sizeof( int ) / 4;
		for(int i = 0; i < blocksSize; i++)
		{
			b2BodyDef myBodyDef;
            myBodyDef.type = b2_dynamicBody; 
            myBodyDef.position.Set(blocks[i][2], blocks[i][3]);
            myBodyDef.angle = 0;
            //myBodyDef.linearDamping = 0.1f;
            b2Body* dynamicBody = m_world->CreateBody(&myBodyDef);
                
            b2PolygonShape boxShape;
            boxShape.SetAsBox(blocks[i][0],blocks[i][1]);

            b2FixtureDef boxFixtureDef;
            boxFixtureDef.shape = &boxShape;
            boxFixtureDef.density = 2.0f;
			boxFixtureDef.friction = 1.0f;
			boxFixtureDef.restitution = 0.0f;
            dynamicBody->CreateFixture(&boxFixtureDef);
		}
		*/
		
		
		b2CircleShape bulletShape;
		bulletShape.m_radius = 1.5f;

		b2FixtureDef bulletFd;
		bulletFd.shape = &bulletShape;
		bulletFd.density = 10.0f;
		bulletFd.restitution = 0.1f;

		b2BodyDef bulletBd;
		bulletBd.type = b2_dynamicBody;
		bulletBd.bullet = true;
		bulletBd.position.Set(XLAUNCHORIG, YLAUNCHORIG);

		currentBird = m_world->CreateBody(&bulletBd);
		currentBird->SetGravityScale(0);
		currentBird->CreateFixture(&bulletFd);
            
    }

	b2Vec2 getTrajectoryPoint( b2Vec2& startingPosition, b2Vec2& startingVelocity, float n )
	{
		// velocity and gravity are given per second but we want time step values here
		float t = 1 / 60.0f; // seconds per time step (at 60fps)
		b2Vec2 stepVelocity = t * startingVelocity; // m/s
		b2Vec2 stepGravity = t * t * m_world->GetGravity(); // m/s/s
  
		return startingPosition + n * stepVelocity + 0.5f * (n*n+n) * stepGravity;
	}
        
    void Step(Settings* settings)
    {
        Test::Step(settings);
            
        m_debugDraw.DrawString( 5, m_textLine, "Level 1-1 Barebones");
		m_debugDraw.DrawString( 5, m_textLine + 15, "[w] [a] [s] [d] to move the trajectory");
		m_debugDraw.DrawString( 5, m_textLine + 30, "[e] to shoot, [r] to restart");

		TrajectoryRayCastClosestCallback raycastCallback(currentBird);//this raycast will ignore the little box

		b2Vec2 startingPosition = b2Vec2( XLAUNCHORIG, YLAUNCHORIG );
		b2Vec2 startingVelocity = b2Vec2( xLaunch, yLaunch );
		b2Color whiteColor = b2Color( 255.0f, 255.0f, 255.0f );

		b2Vec2 lastTP = startingPosition;
        for (int i = 0; i < 300; i++) {//5 seconds, should be long enough to hit something
            b2Vec2 trajectoryPosition = getTrajectoryPoint( startingPosition, startingVelocity, i );

            if ( i > 0 ) {
                m_world->RayCast(&raycastCallback, lastTP, trajectoryPosition);
                if ( raycastCallback.m_hit ) {
                    //glVertex2f (raycastCallback.m_point.x, raycastCallback.m_point.y );
					m_debugDraw.DrawPoint( raycastCallback.m_point, 1.0f, whiteColor );
                    break;
                }
            }

            m_debugDraw.DrawPoint( trajectoryPosition, 1.0f, whiteColor );
            lastTP = trajectoryPosition;
        }




    }
        
    void Keyboard(unsigned char key)
	{
		switch (key)
		{
		case 'e':
			currentBird->SetGravityScale(1);
			currentBird->SetLinearVelocity(b2Vec2(xLaunch,yLaunch));
			break;
		case 'w':
			yLaunch += KEYFACTOR;
			break;
		case 's':
			yLaunch -= KEYFACTOR;
			break;
		case 'd':
			xLaunch += KEYFACTOR;
			break;
		case 'a':
			xLaunch -= KEYFACTOR;
			break;
		}
	}
        
    static Test* Create()
    {
        return new AngryBirdsTest;
    }
};

int AngryBirdsTest::blocks[BLOCKCOUNT][4] = { 
					{ 1, 8, 55, 12 }, 
					{ 1, 8, 69, 12 },
                    { 8, 1, 62, 21 },
                    { 1, 8, 58, 30 },
                    { 1, 8, 66, 30 },
                    { 4, 1, 62, 39 } };

#endif
