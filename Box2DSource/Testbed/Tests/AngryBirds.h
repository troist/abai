
#include "Level.h"
#include <iostream>
#include <stdlib.h>

#ifndef ANGRYBIRDSTEST_H
#define ANGRYBIRDSTEST_H

#define DEGTORAD 0.0174532925199432957f
#define RADTODEG 57.295779513082320876f

#define BLOCKCOUNT 6

#define SIZESCALE 38

#define XLAUNCHORIG 0.0f / SIZESCALE * 2
#define YLAUNCHORIG 130.0f / SIZESCALE * 2

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

public:
        
    b2Body* currentBird;
	float xLaunch;
	float yLaunch;
        
    AngryBirdsTest() 
    {
		        
		//Level level = Level1_1::CreateLevel1_1();  

		Level level;
		level.addObject( new LevelObject( 53.933, -8.342, 359.812, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 57.463, -6.749, 269.86, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 15.394, -1.02, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
		level.addObject( new LevelObject( 12.167, -1.019, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
		level.addObject( new LevelObject( 53.941, -11.222, 359.986, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 0, -0.974, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
		level.addObject( new LevelObject( 55.996, -15.696, 89.994, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 52.182, -15.696, 90.018, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 53.921, -3.317, 359.747, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 54.158, -20.17, 179.983, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 50.304, -6.748, 270.084, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 61.852, -3.658, 90, ObjectStaticsClass::createObject("WOOD_BLOCK_2X1") ) );
		level.addObject( new LevelObject( 45.78, -3.658, 90, ObjectStaticsClass::createObject("WOOD_BLOCK_2X1") ) );
		level.addObject( new LevelObject( 54.301, -23.605, 90, ObjectStaticsClass::createObject("WOOD_BLOCK_2X1") ) );
		level.addObject( new LevelObject( 58.208, -1.316, 0, ObjectStaticsClass::createObject("MISC_ESTRADE_9X3") ) );
		level.addObject( new LevelObject( 49.509, -1.3, 0, ObjectStaticsClass::createObject("MISC_ESTRADE_9X3") ) );
		level.addObject( new LevelObject( 54.023, -12.291, 359.985, ObjectStaticsClass::createObject("WOOD_BLOCK_2X1") ) );
		level.addObject( new LevelObject( 54.26, -21.602, 180, ObjectStaticsClass::createObject("STONE_BLOCK_2X2") ) );
		level.addObject( new LevelObject( 54.169, -13.88, 0.827, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
		level.addObject( new LevelObject( 55.35, -5.83, 90.221, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 52.58, -5.822, 89.561, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );

        // Give initial starting velocity vector
		xLaunch = 40.0f;
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
			LevelObject* levelObject = *l;
			Object* object = levelObject->object;
			Material* material = object->material;

			b2PolygonShape polyShape;
			b2FixtureDef bodyFixtureDef;
			b2BodyDef myBodyDef;
			b2CircleShape circleShape;
			

			char shapeType = object->shape->shapeType();
			
			// 0=dynamic, 1=static
			if ( material->bodyType == '0' ) {
				myBodyDef.type = b2_dynamicBody; 
			} else {
				myBodyDef.type = b2_staticBody; 
			}
            
			myBodyDef.position.Set(levelObject->x, (levelObject->y)*-1);

			// Angle seems to cause problems with circles
			if ( shapeType == 'r' || shapeType == 'p' ) {
				myBodyDef.angle = levelObject->angle*DEGTORAD;
			}
            //myBodyDef.linearDamping = 0.1f;
            b2Body* dynamicBody = m_world->CreateBody(&myBodyDef);

			if ( shapeType == 'r' ) {
				RectangleShape* shape = (RectangleShape*)(object->shape);
				polyShape.SetAsBox( shape->width/SIZESCALE, shape->height/SIZESCALE );
				bodyFixtureDef.shape = &polyShape;
			} else if ( shapeType == 'c' ) {
				CircleShape* shape = (CircleShape*)(object->shape);
				circleShape.m_radius = shape->radius/SIZESCALE;
				bodyFixtureDef.shape = &circleShape;
			}

            
			bodyFixtureDef.density = material->density;
			bodyFixtureDef.friction = material->friction;
			bodyFixtureDef.restitution = material->restitution;
			
			//std::cout<<"Error Start"<<std::endl;
            dynamicBody->CreateFixture(&bodyFixtureDef);
			//std::cout<<"Error End"<<std::endl;

		}		
		
		// Make the bird
		b2CircleShape bulletShape;
		bulletShape.m_radius = 0.5f;

		b2FixtureDef bulletFd;
		bulletFd.shape = &bulletShape;
		bulletFd.density = 6.0f;
		bulletFd.restitution = 0.43f;
		bulletFd.friction = 0.3f;

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

#endif
