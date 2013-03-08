#include <iostream>

class Shape
{
    // Empty class
    /*public:
	const std::string test;
    
	Shape(std::string test) : test(test)
    {
        std::cout<<"made shape"<<std::endl;
    }*/
};

class Circle : public Shape
{
    double radius;
    double offsetX;
    double offsetY;
    
    Circle() { }
    Circle( double radius, double offsetX, double offset Y );
}

class Rectangle : public Shape
{
    double width;
    double height;
    
    Rectangle() { }
    Rectangle( double width, double height );
}

// TODO: Remove hardcoding of array
/*class Polygon : public Shape
{
    int vertexCount;
    double* vertices[];
    
    Polygon() { }
    Polygon( int vertexCount, double vertices[] );
}*/
