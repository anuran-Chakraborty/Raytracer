#include "Vec3.h"
#include <iostream>
#include <cmath>

Vec3::Vec3()
{
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

Vec3::Vec3(double xx, double yy, double zz)
{
    x = xx;
    y = yy;
    z = zz;
}

double Vec3::x()
{
    return x;
}

double Vec3::y()
{
    return y;
}

double Vec3::z()
{
    return z;
}

// Unary operator overloading
Vec3 &Vec3::operator-()
{
    return Vec3(-x, -y, -z);
}

Vec3 &Vec3::operator+=(const Vec3 &u)
{
    x += u.x();
    y += u.y();
    z += u.z();
    return *this;
}
Vec3 &Vec3::operator-=(const Vec3 &);
{
    x -= u.x();
    y -= u.y();
    z -= u.z();
    return *this;
}
Vec3 &Vec3::operator*=(const double t);
{
    x *= t;
    y *= t;
    z *= t;
    return *this;
}
Vec3 &Vec3::operator/=(const double t);
{
    x /= t;
    y /= t;
    z /= t;
    return *this;
}

//Magnitude
double Vec3::mag()
{
    return std::sqrt(sqMag);
}
double Vec3::sqMag()
{
    return x * x + y * y + z * z;
}

// Binary operator
Vec3 operator+(const Vec3 &u, const Vec3 &v){
    return Vec3(u.x() + v.x(), u.y() + v.y(), u.z() + v.z())}

Vec3
operator-(const Vec3 &u, const Vec3 &u){
    return Vec3(u.x() - v.x(), u.y() - v.y(), u.z() - v.z())} Vec3
operator*(const Vec3 &u, double t)
{
    return Vec3(u.x() * t, u.y() * t, u.z() * t);
}

Vec3 operator*(double t, const Vec3 &u)
{
    return Vec3(u.x() * t, u.y() * t, u.z() * t);
}

// Products
double dot(Vec3 &u, Vec &v)
{
    return u.x() * v.x() + u.y() * v.y() + u.z() * v.z();
}
Vec3 cross(Vec3 &u, Vec3 &v)
{
    return Vec3((u.y()*v.z()-v.y()*u.z()),(v.x()*u.z()-u.x()*v.z()),(u.x()*v.y()-u.y()*v.x()));
}

//Unit vector
Vec3 unit(Vec3 &v)
{
    return v / v.mag();
}

using color=Vec3;
using point=Vec3;