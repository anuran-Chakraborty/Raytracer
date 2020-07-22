#ifndef CAMERA_H
#define CAMERA_H

#include "Vec3.h"

class Camera
{
private:
    double viewport_width;
    double viewport_height;
    double focal_length;
    point position;

public:
    Camera(double width, double aspect_ratio, double fl, point pos);

    //Getters
    double getWidth();
    double getHeight();
    double getFocalLength();
    point getPos();
};

#endif