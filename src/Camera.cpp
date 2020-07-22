#include "Camera.h"

Camera::Camera(double width, double aspect_ratio, double fl, point pos)
{
    viewport_width = width;
    viewport_height = viewport_width / aspect_ratio;
    position = pos;
    focal_length = fl;
}

double Camera::getWidth()
{
    return viewport_width;
}

double Camera::getHeight()
{
    return viewport_height;
}
double Camera::getFocalLength()
{
    return focal_length;
}
point Camera::getPos()
{
    return position;
}