#include <iostream>
#include <vector>
#include <array>

// This file requires C++0x

class Shape
{
    // Empty class
    public:
	std::string test;
    
	Shape() { }

	Shape(std::string test) : test(test)
    {
        std::cout<<"made shape"<<std::endl;
    }
};

class Circle : public Shape
{
    double radius;
    double offsetX;
    double offsetY;
    
    Circle() { }
    Circle( double radius, double offsetX, double offsetY );
};

class Rectangle : public Shape
{
    double width;
    double height;
    
    Rectangle() { }
    Rectangle( double width, double height );
};

class Polygon : public Shape
{
    int vertexCount;
	std::vector< std::array< double, 2 > > vertices;
    
    Polygon() { }
    Polygon( int vertexCount, std::vector< std::array< double, 2 > > vertices);
};
