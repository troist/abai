#include "Shape.h"
#include <iostream>

Circle::Circle( double radius, double offsetX, double offset Y )
              : radius(radius), offsetX(offsetX), offsetY(offsetY)
{
    std::cout<<"made circle"<<std::endl;
}

Rectangle::Rectangle( double width, double height )
                    : width(width), height(height)
{
    std::cout<<"made rect"<<std::endl;
}

//TODO: Add polygon support
/*Polygon::Polygon( int vertexCount, double verticesIn[] )
{
    vertices
}*/
