#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <vector>
#include <array>
#include <Box2D/Box2D.h>

// This file requires C++0x

class Shape
{
    // Empty class
    public:
	b2Shape* shape;

	virtual void setb2Shape(b2Shape* inShape)
	{

	}

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

	virtual void setb2Shape(b2Shape* inShape)
	{

	}

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

	virtual void setb2Shape(b2Shape* inShape)
	{

	}
    
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
    
	virtual void setb2Shape(b2Shape* inShape)
	{

	}
	virtual char shapeType()
	{
		return 'p';
	}

    PolygonShape() { }
    PolygonShape( int vertexCount, std::vector< std::array< double, 2 > > vertices);
};

#endif