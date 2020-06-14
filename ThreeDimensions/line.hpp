#ifndef LINE
#define LINE

#include "point.hpp"
/*
class line
{
private:
    int x;
    point* i1;
    point* i2;
public:
    line(point a, point b);
};
*/

class line
{
private:
    double l[3];
public:
    line(point &a, point &b);       // simple constructor
    line(line &c);                  // copy constructor

    double dirX();
    double dirY();
    double dirZ();

    bool parallel(line &a);
    //bool orthogonal(&a);
};

#endif // LINE
