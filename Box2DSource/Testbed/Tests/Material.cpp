#include "Material.h"
#include <iostream>

Material::Material( char bodyType, double defense, double density, double friction, double restitution, double strength )
                  : bodyType(bodyType), defense(defense), density(density), 
                    friction(friction), restitution(restitution), strength(strength)
{
    std::cout<<"made material"<<std::endl;
}
