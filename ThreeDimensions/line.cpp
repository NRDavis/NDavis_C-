#ifndef LINE.H
#define "line.h"
#ifndef MATH.H
#define MATH.H
#ifndef POINT.H
#define "point.h"


double line::getX()
{

}

double line::getY()
{

}

double line::getZ()
{
    return l
}




// Constructors and destructors
line::line()
{
    l = {1/sqrt(3),1/sqrt(3),1/sqrt(3)};    // points in
    i = point(0,0,0);    // origin
}

line::line(point A, point B)
{
    // defining point i
    i = A;

    // defining trajectory
    l[0] = A.getX() - B.getX();
    l[1] = A.getY() - B.getY();
    l[2] = A.getZ() - B.getZ();
}

line::line(line C, point D)
{
    l[0] = C.get
    i = D;
}

line::~line()
{

}

// Functions
bool line::parallel()
{

}

bool line::orthogonal()
{

}

#endif // POINT
#endif // MATH
#endif // LINE
