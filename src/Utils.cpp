#include "Utils.h"

color ray_color(Ray r){
    Vec3 unit_dir=unit(r.getDirection());
    double t=0.5*(unit_dir.y()+1.0);
    return (1.0-t)*color(0.1,0.1,0.5)+t*color(0.8,0.8,0.5);
}