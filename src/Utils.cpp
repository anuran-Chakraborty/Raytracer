#include "Utils.h"

color ray_color(Ray r, Sphere sph){

    hit_info rec;
    if(sph.isHit(r,-0.5,0.5,rec))
    {
        Vec3 nor=rec.normal;
        // return 0.5*color(nor.x(),nor.y(),nor.z());
        return color(1,0,0);
    }

    Vec3 unit_dir=unit(r.getDirection());
    double t=0.5*(unit_dir.y()+1.0);
    return (1.0-t)*color(0.1,0.1,0.5)+t*color(0.8,0.8,0.5);
}