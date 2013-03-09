#include "Shape.h"
#include <iostream>


CircleShape::CircleShape( double radius, double offsetX, double offsetY )
              : radius(radius), offsetX(offsetX), offsetY(offsetY)
{
    std::cout<<"made circle"<<std::endl;
}

RectangleShape::RectangleShape( double width, double height )
                    : width(width), height(height)
{
    std::cout<<"made rect"<<std::endl;
}

PolygonShape::PolygonShape( int vertexCount, std::vector< std::array< double, 2 > > vertices )
				: vertexCount(vertexCount), vertices(vertices)
{
    std::cout<<"made polygon"<<std::endl;
}
/*
char Shape::type = 's';
char CircleShape::type = 'c';
char RectangleShape::type = 'r';
char PolygonShape::type = 'p';*/