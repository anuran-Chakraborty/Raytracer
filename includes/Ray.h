#ifndef RAY_H
#define RAY_H

#include "Vec3.h"

class Ray{
    private:
        point origin;
        Vec3 direction;

    public:
        Ray();
        Ray(point,Vec3);

        //Getters
        point getOrigin();
        Vec3 getDirection();

        // Calculate magnitude of ray at t
        Vec3 intensityAt(double t);

};

#endif