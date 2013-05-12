#ifndef LEVEL_H
#define LEVEL_H

#include "ObjectStaticsClass.h"
#include <vector>

class LevelObject
{
	public:
	double x;
	double y;
	double angle;
	Object* object;
	b2Body* bodyObject;
	int startx,starty,startAngle;
	
	LevelObject() { }
	LevelObject( double x, double y, double angle, Object* object );
};

class Level
{
	public:
	std::vector< LevelObject* > objects;
	int birdCount;
	std::vector< b2Body* > birds;
	int atBird;

	void addObject( LevelObject* object );

	b2Body* getBird();

	Level();
	Level( int birdCount );
	Level( std::vector< LevelObject* > objects );
	Level( std::vector< LevelObject* > objects, int birdCount );

};

#endif