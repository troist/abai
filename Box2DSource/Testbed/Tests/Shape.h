#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <vector>
#include <array>

// This file requires C++0x

class Shape
{
    // Empty class
    public:

	virtual char shapeType()
	{
		return 's';
	}
    
	Shape() { }
};

class CircleShape : public Shape
{
	public:
    double radius;
    double offsetX;
    double offsetY;

	virtual char shapeType()
	{
		return 'c';
	}
    
    CircleShape() { }
    CircleShape( double radius, double offsetX, double offsetY );
};

class RectangleShape : public Shape
{
	public:
    double width;
    double height;
    
	virtual char shapeType()
	{
		return 'r';
	}

    RectangleShape() { }
    RectangleShape( double width, double height );
};

class PolygonShape : public Shape
{
	public:
    int vertexCount;
	std::vector< std::array< double, 2 > > vertices;
    
	virtual char shapeType()
	{
		return 'p';
	}

    PolygonShape() { }
    PolygonShape( int vertexCount, std::vector< std::array< double, 2 > > vertices);
};

#endif