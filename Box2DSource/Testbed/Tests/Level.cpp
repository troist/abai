#include "Level.h"
#include <iostream>

LevelObject::LevelObject( double x, double y, double angle, Object* object )
						: x(x), y(x), angle(angle), object(object)
{
	std::cout<<"made level object"<<std::endl;
}

Level::Level( std::vector< LevelObject* > objects )
			: objects(objects)
{
	std::cout<<"made level"<<std::endl;
}