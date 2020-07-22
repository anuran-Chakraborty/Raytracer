#ifndef UTIL_H
#define UTIL_H
#include "Vec3.h"
#include "Ray.h"
#include "Sphere.h"

//Function to return color of bg
color ray_color(Ray r, Sphere sph);

#endif