#include "FrameBuffer.h"
#include "Utils.h"
#include "Ray.h"
#include "Camera.h"
#include "Vec3.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    int width=1920;
    double aspect_ratio=16.0/9.0;
    int height=static_cast<int>(width/aspect_ratio);
    FrameBuffer fb(width,height);

    point origin=point(0,0,0);
    Camera cam(2.0, 16.0/9.0, 1.0, origin);
    Vec3 horizontal=Vec3(cam.getWidth(),0,0);
    Vec3 vertical=Vec3(0,cam.getHeight(),0);

    point lower_left=origin-horizontal/(double)2.0-vertical/(double)2.0-point(0,0,cam.getFocalLength());
    
    Sphere sph(point(0,0,0),0.03);

    // Write a sample frame buffer
    int i,j;
    for(i=height-1;i>=0;i--)
        for(j=0;j<width;j++)
        {
            double u=(double)i/(height-1);
            double v=(double)i/(width-1);

            Ray r(origin, lower_left+u*vertical+v*horizontal-origin);
            color c=ray_color(r,sph);
            fb.setPixel(i,j,c);
        }

    fb.writeBuffer();

    return 0;
}
