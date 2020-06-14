#ifndef LINE
#define LINE
#include "point.h"

/*
Files line.cpp and line.h define how point and plane objects interact
*/

class line
{
private:
    double l[3];            // a line defined by a direction
    point i;
public:
    line();
    line(point &A, point &B);
    line(line &C, point &D);
    ~line();

    double dirX();
    double dirY();
    double dirZ();

    point offset();
    double offsetX();
    double offsetY();
    double offsetZ();

    bool parallel();
    bool orthogonal();
};


#endif // LINE
