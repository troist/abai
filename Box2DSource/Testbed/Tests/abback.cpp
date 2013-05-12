
#include "Level.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>

#ifndef ANGRYBIRDSTEST_H
#define ANGRYBIRDSTEST_H

#define DEGTORAD 0.0174532925199432957f
#define RADTODEG 57.295779513082320876f

#define BLOCKCOUNT 6

#define SIZESCALE 40

#define XLAUNCHORIG 20.0f / SIZESCALE * 2
#define YLAUNCHORIG 180.0f / SIZESCALE * 2

#define KEYFACTOR 0.05f

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
	
	float slingx;
	float slingy;

	b2Vec2 startingVelocity;

	Level level;
        
    AngryBirdsTest() 
    {
		        
		//Level level = Level1_1::CreateLevel1_1();  

		
		level.addObject( new LevelObject( 65.54, -9.081, 329.714, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 73.544, -13.655, 205.369, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 76.954, -7.554, 90.679, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 69.882, -9.632, 180.567, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
		level.addObject( new LevelObject( 65.788, -13.603, 335.673, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 64.193, -5.616, 269.944, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 69.79, -12.632, 90.477, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 73.996, -9.004, 28.898, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 75.307, -5.577, 270.045, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 5.043, -0.972, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
		level.addObject( new LevelObject( 2.549, -1.136, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
		level.addObject( new LevelObject( 8.196, -0.925, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
		level.addObject( new LevelObject( 0, -1.082, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
		level.addObject( new LevelObject( 62.402, -7.576, 89.304, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 70.096, -4.682, 359.986, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
		level.addObject( new LevelObject( 72.587, 1.363, 89.997, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
		level.addObject( new LevelObject( 66.672, 1.293, 89.997, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
		level.addObject( new LevelObject( 77.517, -0.045, 44.998, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_5X5") ) );
		level.addObject( new LevelObject( 61.813, -0.045, 44.998, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_5X5") ) );
		level.addObject( new LevelObject( 73.183, -5.544, 90.074, ObjectStaticsClass::createObject("STONE_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 69.763, -8.092, 0.583, ObjectStaticsClass::createObject("STONE_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 66.116, -5.615, 90.146, ObjectStaticsClass::createObject("STONE_BLOCK_4X1") ) );


        // Give initial starting velocity vector
		xLaunch = 40.0f;
		yLaunch = 20.0f;

		// Gets most powerful velocity on line x=y
		//slingx = (sqrt(5000) / SIZESCALE) * -1 * 2;
		//slingy = (sqrt(5000) / SIZESCALE) * -1 * 2;

		// Shoots good level 1 shot
		slingx = -4.435535f;
		slingy = -2.385535f;

		startingVelocity = b2Vec2( slingx * -1 * 5 , slingy * -1 * 5 );
		
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
				std::cout<<levelObject->angle<<std::endl;
				myBodyDef.angle = (180-(levelObject->angle))*DEGTORAD;
			}
            //myBodyDef.linearDamping = 0.1f;
            b2Body* dynamicBody = m_world->CreateBody(&myBodyDef);

			if ( shapeType == 'r' ) {
				RectangleShape* shape = (RectangleShape*)(object->shape);
				polyShape.SetAsBox( shape->width/SIZESCALE, shape->height/SIZESCALE );
				bodyFixtureDef.shape = &polyShape;
			} else if ( shapeType == 'c' ) {
				CircleShape* shape = (CircleShape*)(object->shape);
				circleShape.m_radius = shape->radius/SIZESCALE*2;
				bodyFixtureDef.shape = &circleShape;
			}

            
			bodyFixtureDef.density = material->density;
			bodyFixtureDef.friction = material->friction;
			bodyFixtureDef.restitution = material->restitution;
			
			//std::cout<<"Error Start"<<std::endl;
            dynamicBody->CreateFixture(&bodyFixtureDef);
			//std::cout<<"Error End"<<std::endl;

			levelObject->bodyObject = dynamicBody;
			levelObject->startx = dynamicBody->GetPosition().x;
			levelObject->starty = dynamicBody->GetPosition().y;


		}		
		
		// Make the bird
		b2CircleShape bulletShape;
		bulletShape.m_radius = 17.0f / SIZESCALE * 2;

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

	double bodyMoved(LevelObject* body)
	{
		double xDist = abs(body->bodyObject->GetPosition().x - body->startx);
		double yDist = abs(body->bodyObject->GetPosition().y - body->starty);

		double c2 = pow(xDist,2) + pow(yDist,2);

		return sqrt(c2);
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

		double sum = 0;
		int i = 0;

		for (std::vector<LevelObject*>::iterator l = level.objects.begin(); l != level.objects.end(); ++l)
		{
			b2Body* bodyObj = (*l)->bodyObject;
			b2Vec2 pos = bodyObj->GetPosition();
			//printf("%s %f %f\n", levelObject->object->type, pos.x, pos.y);
			//std::cout << (*l)->object->type << ": " << bodyMoved(*l) << std::endl;
			sum+=bodyMoved(*l);
			i++;
		}
		std::cout << "Moved: " << sum / i << std::endl;
		
            
        m_debugDraw.DrawString( 5, m_textLine, "Level 1-1 Barebones");
		m_debugDraw.DrawString( 5, m_textLine + 15, "[w] [a] [s] [d] to move the trajectory");
		m_debugDraw.DrawString( 5, m_textLine + 30, "[e] to shoot, [r] to restart");

		TrajectoryRayCastClosestCallback raycastCallback(currentBird);//this raycast will ignore the little box

		b2Vec2 startingPosition = b2Vec2( XLAUNCHORIG, YLAUNCHORIG );
		b2Vec2 slingVector = b2Vec2( slingx,  slingy );
		startingVelocity = b2Vec2( slingx * -1 * 5 , slingy * -1 * 5 );

		
		b2Color whiteColor = b2Color( 255.0f, 255.0f, 255.0f );

		m_debugDraw.DrawSegment( startingPosition+slingVector, startingPosition, whiteColor );
		m_debugDraw.DrawSegment( startingPosition+startingVelocity, startingPosition, whiteColor );

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
       
	bool powerCheck( float x, float y )
	{
		return true;
		std::cout << std::to_string(x) + ", " + std::to_string(y) << std::endl;
		
		return ( x < 0 && y < 0 ) && ( (x*x) + (y*y) < 25 );
	}

    void Keyboard(unsigned char key)
	{
		switch (key)
		{
		case 'e':
			currentBird->SetGravityScale(1);
			currentBird->SetLinearVelocity(startingVelocity);
			break;
		case 'w':
			if ( powerCheck( slingx, slingy-KEYFACTOR ) ) {
				slingy -= KEYFACTOR;
			}
			break;
		case 's':
			if ( powerCheck( slingx, slingy+KEYFACTOR ) ) {
				slingy += KEYFACTOR;
			}
			break;
		case 'd':
			if ( powerCheck( slingx-KEYFACTOR, slingy ) ) {
				slingx -= KEYFACTOR;
			}
			break;
		case 'a':
			if ( powerCheck( slingx+KEYFACTOR, slingy ) ) {
				slingx += KEYFACTOR;
			}
			break;
		}
	}
        
    static Test* Create()
    {
        return new AngryBirdsTest;
    }
};

#endif
