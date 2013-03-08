#include "Object.h"
#include <iostream>

Object::Object( std::string type, Material* material, Shape* shape, double score, const std::string editorGroup )
              : type(type), material(material), shape(shape), score(score), editorGroup(editorGroup)
{
    std::cout<<"made object - ";
}

Bird::Bird( std::string type, Material* material, Shape* shape, double score, const std::string editorGroup, double damagedFrameCount, double maxHealth )
          : Object( type, material, shape, score, editorGroup ), damagedFrameCount(damagedFrameCount), maxHealth(maxHealth)
{
    std::cout<<"bird"<<std::endl;
}

Block::Block( std::string type, Material* material, Shape* shape, double score, const std::string editorGroup, double maxHealth )
            : Object( type, material, shape, score, editorGroup ), maxHealth(maxHealth)
{
    std::cout<<"block"<<std::endl;
}

Terrain::Terrain(std::string type, Material* material, Shape* shape, double score, const std::string editorGroup, double damagedFrameCount)
                : Object(type, material, shape, score, editorGroup), damagedFrameCount(damagedFrameCount)
{
    std::cout<<"terrain"<<std::endl;
}

Pig::Pig(std::string type, Material* material, Shape* shape, double score, const std::string editorGroup, double maxHealth)
        : Object(type, material, shape, score, editorGroup), maxHealth(maxHealth)
{
    std::cout<<"pig"<<std::endl;
}
