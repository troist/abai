#include "ObjectStaticsClass.h"
#include <vector>

class LevelObject
{
	public:
	double x;
	double y;
	double angle;
	Object* object;
	
	LevelObject() { }
	LevelObject( double x, double y, double angle, Object* object );
};

class Level
{
	public:
	std::vector< LevelObject* > objects;

	Level() { }
	Level( std::vector< LevelObject* > objects );

};