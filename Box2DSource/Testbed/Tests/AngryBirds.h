
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include "Level.h"
#include "AI.h"
#include "LevelStaticsClass.h"

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

	bool keySwitchOnLaunch;
	
	float slingx;
	float slingy;

	b2Vec2 hitTarget;

	b2Vec2 birdVel;

	Level level;
	std::string levelLabel;

	AI ai;

	double initialChange;
        
    AngryBirdsTest() 
    {
		// Currently included levels are: 1, 4, 5, 7, 9, 12, 13, 16, 17, 20, 21
		level = LevelStaticsClass::Level1_1();

		keySwitchOnLaunch = true;

		// Shoots good level 1 shot
		slingx = -4.435535f;
		slingy = -2.385535f;

		birdVel = b2Vec2( slingx * -1 * 5 , slingy * -1 * 5 );

		ai = AI(&level);
		hitTarget = ai.chooseTarget();

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
				//std::cout<<levelObject->angle<<std::endl;
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

		// Make the birds
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

		for( int i = 0; i < level.birdCount; i++)
		{
			bulletBd.position.Set(XLAUNCHORIG-(3*(i+1)), YLAUNCHORIG);
			
			b2Body* tempBird = m_world->CreateBody(&bulletBd);
			tempBird->SetGravityScale(0);
			tempBird->CreateFixture(&bulletFd);

			level.birds.push_back(tempBird);
			
		}

		//currentBird = level.getBird();
            
    }

	double bodyMoved(LevelObject* body)
	{
		double xDist = abs(body->bodyObject->GetPosition().x - body->startx);
		double yDist = abs(body->bodyObject->GetPosition().y - body->starty);

		double c2 = pow(xDist,2) + pow(yDist,2);

		return sqrt(c2);
	}

	b2Vec2 getTrajectoryPoint( b2Vec2& startingPosition, b2Vec2& _birdVel, float n )
	{
		float t = 1 / 60.0f;
		b2Vec2 stepVelocity = t * _birdVel;
		b2Vec2 stepGravity = t * t * m_world->GetGravity();
  
		return startingPosition + n * stepVelocity + 0.5f * (n*n+n) * stepGravity;
	}
        
    void Step(Settings* settings)
    {
        Test::Step(settings);

		double sum = 0;
		int i = 0;

		/*for (std::vector<LevelObject*>::iterator l = level.objects.begin(); l != level.objects.end(); ++l)
		{
			b2Body* bodyObj = (*l)->bodyObject;
			b2Vec2 pos = bodyObj->GetPosition();
			//printf("%s %f %f\n", levelObject->object->type, pos.x, pos.y);
			//std::cout << (*l)->object->type << ": " << bodyMoved(*l) << std::endl;
			sum+=bodyMoved(*l);
			i++;
		}*/
		//std::cout << "Moved: " << sum / i << std::endl;
		
            
        //m_debugDraw.DrawString( 5, m_textLine, "Level 1-13");
		if ( keySwitchOnLaunch) m_debugDraw.DrawString( 5, m_textLine, "[w] [a] [s] [d] to move the trajectory");
		else m_debugDraw.DrawString( 5, m_textLine, "[w] [a] [s] [d] to move the target");
		m_debugDraw.DrawString( 5, m_textLine + 15, "[e] to shoot, [t] to hit target, [q] to switch control, [r] to restart");

		TrajectoryRayCastClosestCallback raycastCallback(currentBird);//this raycast will ignore the little box

		b2Vec2 startingPosition = b2Vec2( XLAUNCHORIG, YLAUNCHORIG );
		b2Vec2 slingVector = b2Vec2( slingx,  slingy );
		birdVel = b2Vec2( slingx * -1 * 5 , slingy * -1 * 5 );

		
		b2Color whiteColor = b2Color( 255.0f, 255.0f, 255.0f );

		m_debugDraw.DrawSegment( startingPosition+slingVector, startingPosition, whiteColor );
		m_debugDraw.DrawSegment( startingPosition+birdVel, startingPosition, whiteColor );

		b2Vec2 lastTP = startingPosition;
        for (int i = 0; i < 300; i++) {//5 seconds, should be long enough to hit something
            b2Vec2 trajectoryPosition = getTrajectoryPoint( startingPosition, birdVel, i );

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

		// Draw an x over the target
		double xSize = 0.5;
		m_debugDraw.DrawSegment ( b2Vec2( hitTarget.x + xSize, hitTarget.y + xSize ), b2Vec2( hitTarget.x - xSize, hitTarget.y - xSize ), whiteColor );
		m_debugDraw.DrawSegment ( b2Vec2( hitTarget.x + xSize, hitTarget.y - xSize ), b2Vec2( hitTarget.x - xSize, hitTarget.y + xSize ), whiteColor );
		
    }

	void shoot()
	{
		if(level.atBird < level.birdCount) {
			b2Body* curBird = level.getBird();
			currentBird = curBird;
			curBird->SetGravityScale(1);
			curBird->SetLinearVelocity(birdVel);
			curBird->SetTransform(b2Vec2(XLAUNCHORIG,YLAUNCHORIG),0);
		}
	}

	void shoot(b2Vec2 _birdVel)
	{
		birdVel = _birdVel;
		slingx = _birdVel.x * -1 * 0.2;
		slingy = _birdVel.y * -1 * 0.2;
		shoot();
	}

	bool hit()
	{
		int i = 60;
		b2Vec2 calcVec;
		do
		{
			float t = i / 60.0f;
			if( i > 600 ) return false; // Bird cannot need to travel over 10 seconds to hit the target
			double vx = (hitTarget.x - XLAUNCHORIG) / t;
			double vy = ((hitTarget.y + ( 0.5 * ( m_world->GetGravity().y * -1 ) * t * t )) - YLAUNCHORIG ) / t;
			//if( i % 100 == 1 ) std::cout << vx << " - " << vy << std::endl;// For debugging
			calcVec = b2Vec2( vx, vy );
			i++;
		} while( !powerAllowed(calcVec) );

		shoot(calcVec);
		return true;
	}

	bool hit(double _x, double _y)
	{
		hitTarget = b2Vec2(_x,_y);
		return hit();
	}

	void updateHit( double _x, double _y )
	{
		hitTarget = b2Vec2( hitTarget.x + _x, hitTarget.y + _y );
	}

	void updateLaunch( double _x, double _y )
	{
		slingx += _x;
		slingy += _y;
	}

	bool powerAllowed(b2Vec2 vec)
	{
		int powerMax = 30;
		double vecLength = sqrt((vec.x * vec.x) + (vec.y * vec.y));
		return (vecLength <= powerMax);
	}


    void Keyboard(unsigned char key)
	{
		switch (key)
		{
		case 'e':
			shoot();
			break;

		case 't':
			hit();
			break;

		case 'w':
			if ( keySwitchOnLaunch ) updateLaunch( 0, KEYFACTOR * -1 );
			else updateHit( 0, KEYFACTOR * 5 );
			break;

		case 's':
			if ( keySwitchOnLaunch ) updateLaunch( 0, KEYFACTOR );
			else updateHit( 0, KEYFACTOR * -5 );
			break;

		case 'd':
			if ( keySwitchOnLaunch ) updateLaunch( KEYFACTOR * -1, 0 );
			else updateHit( KEYFACTOR * 5, 0 );
			break;

		case 'a':
			if ( keySwitchOnLaunch ) updateLaunch( KEYFACTOR, 0 );
			else updateHit( KEYFACTOR * -5, 0 );
			break;

		case 'q':
			keySwitchOnLaunch = !keySwitchOnLaunch;
			break;

		case 'f':
			int i = 0;
			double sum = 0;
			for (std::vector<LevelObject*>::iterator l = level.objects.begin(); l != level.objects.end(); ++l)
			{

				b2Body* bodyObj = (*l)->bodyObject;
				b2Vec2 pos = bodyObj->GetPosition();
				//printf("%s %f %f\n", levelObject->object->type, pos.x, pos.y);
				//std::cout << (*l)->object->type << ": " << bodyMoved(*l) << std::endl;
				sum+=bodyMoved(*l);
				i++;
			}
			std::cout << "Sum: " << sum << "\tAvg:" << sum / i << std::endl;
			break;

		}
	}
    
    static Test* Create()
    {
        return new AngryBirdsTest;
    }
};

#endif
