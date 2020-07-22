#ifndef VEC3_H
#define VEC3_H

class Vec3
{
private:
    double x1;
    double x2;
    double x3;

public:
    // Constructors
    Vec3();
    Vec3(double xx, double yy, double zz);

    // Getters
    double x();
    double y();
    double z();

    // Unary operator overloading
    Vec3 operator-();
    Vec3 &operator+=(Vec3 &);
    Vec3 &operator-=(Vec3 &);
    Vec3 &operator*=(double t);
    Vec3 &operator/=(double t);

    //Magnitude
    double mag();
    double sqMag();
};

// Binary operator
Vec3 operator+(Vec3, Vec3);
Vec3 operator-(Vec3, Vec3);
Vec3 operator*(Vec3, double);
Vec3 operator*(double t, Vec3 );
Vec3 operator/(Vec3 u, double t);

// Products
double dot(Vec3, Vec3 );
Vec3 cross(Vec3, Vec3 );

//Unit vector
Vec3 unit(Vec3 v);

using color=Vec3;
using point=Vec3;

#endif