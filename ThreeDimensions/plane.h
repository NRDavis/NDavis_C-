/*
This header file and its associated function file will be used to define how plane objects work.
A plane may be defined by using three points, a line and a point, or other combinations.

*/
#ifndef POINT.H
#define "point.h"


class plane
{
private:
    double n[3];        // normal vector
public:
    plane();
    plane(point A, point B, point C);
    plane(line A, line B);
    ~plane()

    double getX();
    double getY();
    double getZ();

    double[3] normal();
};

#endif
