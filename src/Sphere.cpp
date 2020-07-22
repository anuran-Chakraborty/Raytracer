#include "Sphere.h"
#include <cmath>

Sphere::Sphere(){
    radius=0.0;
    center=point(0.0,0.0,0.0);
}

Sphere::Sphere(point c,double rad){
    center=c;
    radius=rad;
}

bool Sphere::isHit(Ray r, double tmin, double tmax, hit_info& rec){

    Vec3 b=r.getDirection();
    point A=r.getOrigin();
    point C=center;

    double h=dot(b,(A-C));
    double a=dot(b,b);
    double c=dot((A-C),(A-C))-radius*radius;

    double discriminant=h*h-a*c;

    // if it intersects
    if(discriminant>0)
    {
        double root_dis=std::sqrt(discriminant);
        // Find the roots
        double t1=(-h+root_dis)/a;
        if(t1>tmin && t1<tmax)
        {
            rec.t=t1;
            rec.at=r.intensityAt(t1);
            rec.normal=(rec.at-center)/radius;
            return true;
        } 

        t1=(-h-root_dis)/a;
        if(t1>tmin && t1<tmax)
        {
            rec.t=t1;
            rec.at=r.intensityAt(t1);
            rec.normal=(rec.at-center)/radius;
            return true;
        } 
    }
    return false;

}