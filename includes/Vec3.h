#ifndef VEC3_H
#define VEC3_H

class Vec3
{
private:
    double x;
    double y;
    double z;

public:
    // Constructors
    Vec3();
    Vec3(double xx, double yy, double zz);

    // Getters
    double x();
    double y();
    double z();

    // Unary operator overloading
    Vec3 &operator-();
    Vec3 &operator+=(const Vec3 &);
    Vec3 &operator-=(const Vec3 &);
    Vec3 &operator*=(const double t);
    Vec3 &operator/=(const double t);

    //Magnitude
    double mag();
    double sqMag();
};

// Binary operator
Vec3 operator+(const Vec3, const Vec3);
Vec3 operator-(const Vec3, const Vec3);
Vec3 operator*(const Vec3, double);
Vec3 operator*(double t, const Vec3 &);

// Products
double dot(Vec3 &, Vec &);
Vec3 cross(Vec3 &, Vec3 &);

//Unit vector
Vec3 unit(Vec3 v);

#endif