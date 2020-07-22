#include "Ray.h"

Ray::Ray()
{
    origin = point(0, 0, 0);
    direction = Vec3(0, 0, 0);
}

Ray::Ray(point A, Vec3 B)
{
    origin = A;
    direction = B;
}

point Ray::getOrigin()
{
    return origin;
}

Vec3 Ray::getDirection()
{
    return direction;
}

Vec3 Ray::intensityAt(double t)
{
    return origin + t * direction;
}