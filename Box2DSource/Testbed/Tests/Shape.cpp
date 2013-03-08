#include "Shape.h"
#include <iostream>

Circle::Circle( double radius, double offsetX, double offsetY )
              : radius(radius), offsetX(offsetX), offsetY(offsetY)
{
    std::cout<<"made circle"<<std::endl;
}

Rectangle::Rectangle( double width, double height )
                    : width(width), height(height)
{
    std::cout<<"made rect"<<std::endl;
}

Polygon::Polygon( int vertexCount, std::vector< std::array< double, 2 > > vertices )
				: vertexCount(vertexCount), vertices(vertices)
{
    std::cout<<"made polygon"<<std::endl;
}
