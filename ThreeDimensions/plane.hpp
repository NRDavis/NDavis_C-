#ifndef PLANE
#define PLANE

#include "point.hpp"
#include "line.hpp"
#include <iostream>


class plane
{
private:
    double n[3];        // normal vector
public:
    plane(point &a, point &b, point &c);
    plane(line &a, line &b);

    double compX();
    double compY();
    double compZ();

    void printNormal();
};



#endif // PLANE
