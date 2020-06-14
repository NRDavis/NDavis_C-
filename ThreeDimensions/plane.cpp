#ifndef PLANE.H
#define "plane.h"




// Constructors and Destructors
plane::plane()
{

}

plane::plane(point A, point B, point C)
{

}

plane::plane(line A, line B)plane
{

}

plane::~plane()
{

}

// component functions
double plane::getZ()
{
    return n[0];
}

double plane::getY()
{
    return n[1];
}

double plane::getZ()
{
    return n[2];
}

double[] plane::normal()
{
    return n;
}

#endif
