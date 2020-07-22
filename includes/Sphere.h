#ifndef SPHERE_H
#define SPHERE_H
#include "Hitable.h"

class Sphere:public Hitable
{
    private:
        double radius;
        point center;
    
    public:
        Sphere();
        Sphere(point,double);
        virtual bool isHit(Ray,double,double,hit_info&) override;
};

#endif