#include "Level.h"
#include <iostream>

LevelObject::LevelObject( double x, double y, double angle, Object* object )
						: x(x), y(y), angle(angle), object(object), startAngle(angle)
{
	//std::cout<<"made level object"<<std::endl;
}

Level::Level()
{
	atBird = 0;
	birdCount = 1;
}

Level::Level( int birdCount )
			: birdCount(birdCount)
{
	atBird = 0;
	//std::cout << "made empty level" << std::endl;
}

Level::Level( std::vector< LevelObject* > objects )
			: objects(objects), birdCount(1)
{
	atBird = 0;
	//std::cout<<"made level"<<std::endl;
}

Level::Level( std::vector< LevelObject* > objects, int birdCount )
			: objects(objects), birdCount(birdCount)
{
	atBird = 0;
	//std::cout<<"made level (b)"<<std::endl;
}

void Level::addObject( LevelObject* object)
{
	objects.push_back( object );
}

b2Body* Level::getBird()
{
	b2Body* ret = birds.front();
	birds.erase(birds.begin());
	atBird++;
	return ret;
}