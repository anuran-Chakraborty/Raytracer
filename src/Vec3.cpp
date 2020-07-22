#include "Vec3.h"
#include <iostream>
#include <cmath>

Vec3::Vec3()
{
    x1 = 0.0;
    x2 = 0.0;
    x3 = 0.0;
}

Vec3::Vec3(double xx, double yy, double zz)
{
    x1 = xx;
    x2 = yy;
    x3 = zz;
}

double Vec3::x()
{
    return x1;
}

double Vec3::y()
{
    return x2;
}

double Vec3::z()
{
    return x3;
}

// Unary operator overloading
Vec3 Vec3::operator-()
{
    return Vec3(-x1, -x2, -x3);
}

Vec3 &Vec3::operator+=(Vec3 &u)
{
    x1 += u.x1;
    x2 += u.x2;
    x3 += u.x3;
    return *this;
}
Vec3 &Vec3::operator-=(Vec3 &u)
{
    x1 -= u.x();
    x2 -= u.y();
    x3 -= u.z();
    return *this;
}
Vec3 &Vec3::operator*=(double t)
{
    x1 *= t;
    x2 *= t;
    x3 *= t;
    return *this;
}
Vec3 &Vec3::operator/=(double t)
{
    x1 /= t;
    x2 /= t;
    x3 /= t;
    return *this;
}

//Magnitude
double Vec3::mag()
{
    return std::sqrt(sqMag());
}
double Vec3::sqMag()
{
    return x1 * x1 + x2 * x2 + x3 * x3;
}

// Binary operator
Vec3 operator+(Vec3 u, Vec3 v)
{
    return Vec3(u.x() + v.y(), u.y() + v.y(), u.z() + v.z());
}

Vec3 operator-(Vec3 u, Vec3 v)
{
    return Vec3(u.x() - v.x(), u.y() - v.y(), u.z() - v.z());
}
Vec3 operator*(Vec3 u, double t)
{
    return Vec3(u.x() * t, u.y() * t, u.z() * t);
}

Vec3 operator*(double t, Vec3 u)
{
    return Vec3(u.x() * t, u.y() * t, u.z() * t);
}

Vec3 operator/(Vec3 u, double t)
{
    return Vec3(u.x() / t, u.y() / t, u.z() / t);
}

// Products
double dot(Vec3 u, Vec3 v)
{
    return u.x() * v.x() + u.y() * v.y() + u.z() * v.z();
}
Vec3 cross(Vec3 u, Vec3 v)
{
    return Vec3((u.y() * v.z() - v.y() * u.z()), (v.x() * u.z() - u.x() * v.z()), (u.x() * v.y() - u.y() * v.x()));
}

//Unit vector
Vec3 unit(Vec3 v)
{
    return v / v.mag();
}
