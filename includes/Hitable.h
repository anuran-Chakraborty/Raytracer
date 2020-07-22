#ifndef HITABLE_H
#define HITABLE_H

#include "Vec3.h"
#include "Ray.h"

struct hit_info
{
    point at;
    Vec3 normal;
    double t;
    bool front_face;
};
class Hitable
{
    public:
        // Function to check if a ray hits the object
        virtual bool isHit(Ray r,double tmin, double tmax, hit_info& hit)=0;
};

#endif