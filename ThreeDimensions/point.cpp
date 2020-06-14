#include "point.hpp"
#include <math.h>


// Constructors and Destructors
point::point()
{
    x = 0;
    y = 0;
    z = 0;
}

point::point(double xx, double yy, double zz)
{
    x = xx;
    y = yy;
    z = zz;
}

point::point(point &A)
{
    x = A.getX();
    y = A.getY();
    z = A.getZ();
}

point::~point()
{

}


// Return components
double point::getX()
{
    return x;
}

double point::getY()
{
    return y;
}

double point::getZ()
{
    return z;
}


// Functional components
double point::dist2Origin()
{
    return sqrt(x*x + y*y + z*z);
}

double point::dist2Pt(point A)
{
    double dx = x - A.getX();
    double dy = y - A.getY();
    double dz = z - A.getZ();
    return sqrt( dx*dx + dy*dy + dz*dz);
}

