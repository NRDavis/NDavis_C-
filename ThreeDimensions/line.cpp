#include "line.hpp"

/*
line::line(point a, point b)
{
    *i1 = point(a);
    *i2 = point(b);
}
*/


line::line(point &a, point &b)
{
    l[0] = b.getX() - a.getX();
    l[1] = b.getY() - a.getY();
    l[2] = b.getZ() - a.getZ();
}

line::line(line &c)
{
    l[0] = c.dirX();
    l[1] = c.dirY();
    l[2] = c.dirZ();
}


double line::dirX()
{
    return l[0];
}

double line::dirY()
{
    return l[1];
}

double line::dirZ()
{
    return l[2];
}

bool line::parallel(line &a)
{
    if(a.dirX() == l[0] && a.dirY() == l[1] && a.dirZ() == l[2])
    {
        return true;
    }
    return false;
}
