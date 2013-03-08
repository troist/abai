#ifndef MATERIAL_H
#define MATERIAL_H

class Material
{
    public:
    char bodyType; // 0=dynamic, 1=static
    double defense;
    double density;
    double friction;
    double restitution;
    double strength;
    
    Material() { }
    Material( char bodyType, double defense, double density, double friction, double restitution, double strength );
};

#endif
