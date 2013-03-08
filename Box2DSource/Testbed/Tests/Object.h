#ifndef OBJECT_H
#define OBJECT_H

#include "Material.h"
#include "Shape.h"

class Object
{
    public:
    std::string type;
    Material* material;
    Shape* shape;
    double score;
    std::string editorGroup;
    
    Object() { }
    Object( std::string type, Material* material, Shape* shape, double score, std::string editorGroup );
};

class Bird : public Object
{
    public:
    double damagedFrameCount;
    double maxHealth;
    
    Bird() { }
    Bird( std::string type, Material* material, Shape* shape, double score, std::string editorGroup, double damagedFrameCount, double maxHealth );
};

class Block : public Object
{
    public:
    double maxHealth;
    
    Block() { }
    Block( std::string type, Material* material, Shape* shape, double score, std::string editorGroup, double maxHealth );
};

class Terrain : public Object
{
    public:
    double damagedFrameCount;
    
    Terrain() { }
    Terrain(std::string type, Material* material, Shape* shape, double score, std::string editorGroup, double damagedFrameCount);
};

class Pig : public Object
{
    public:
    double maxHealth;
    
    Pig() { }
    Pig(std::string type, Material* material, Shape* shape, double score, std::string editorGroup, double maxHealth);
};

#endif

