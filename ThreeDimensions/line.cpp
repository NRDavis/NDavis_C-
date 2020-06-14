#include "line.h"
#include <math.h>
#ifndef POINT
#include POINT




// Constructors and destructors
line::line()
{
    //l = {1/sqrt(3),1/sqrt(3),1/sqrt(3)};    // points in
    l[0] = 1/sqrt(3);
    l[1] = 1/sqrt(3);
    l[2] = 1/sqrt(3);

    i = point(0,0,0);    // origin
}

line::line(point &A, point &B)
{
    // defining point i
    i = point(&A);

    // defining trajectory
    l[0] = A.getX() - B.getX();
    l[1] = A.getY() - B.getY();
    l[2] = A.getZ() - B.getZ();
}

line::line(line &C, point &D)
{
    l[0] = C.dirX();
    l[1] = C.dirY();
    l[2] = C.dirZ();

    i = point(&D);
}

line::~line()
{

}

// Functions


double line::dirX()
{
    return 1[0];
}

double line::dirY()
{
    return l[1];
}

double line::dirZ()
{
    return l[2];
}

point line::offset()
{
    return i;
}

 double line::offsetX()
{
    return i.getX();
}

double line::offsetY()
{
    return i.getY();
}

double line::offsetZ()
{
    return i.getZ();
}

bool line::parallel()
{
    //temp
    return false;
}

bool line::orthogonal()
{
    //temp
    return false;
}

#endif
