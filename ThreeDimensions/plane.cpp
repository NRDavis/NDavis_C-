#include "plane.hpp"
using namespace std;

plane::plane(point &a, point &b, point &c)
{
    // we allocate two lines

    double i1, j1, k1;      // components for first line
    double i2, j2, k2;      // components for second line

    i1 = b.getX() - a.getX();
    j1 = b.getY() - a.getY();
    k1 = b.getZ() - a.getZ();
    cout<<"First line: "<<i1<<" "<<j1<<" "<<k1<<endl;

    i2 = c.getX() - b.getX();
    j2 = c.getY() - b.getY();
    k2 = c.getZ() - b.getZ();
    cout<<"Second line: "<<i2<<" "<<j2<<" "<<k2<<endl;

    n[0] = j1*k2 - k1*j2;
    n[1] = k1*i2 - i1*k2;
    n[2] = i1*j2 - j1*i2;
}

plane::plane(line &a, line &b)
{
   n[0] = a.dirY()*b.dirZ() - a.dirZ()*b.dirY();
   n[1] = a.dirZ()*b.dirX() - a.dirX()*b.dirZ();
   n[2] = a.dirX()*b.dirY() - a.dirY()*b.dirX();
}

double plane::compX()
{
    return n[0];
}

double plane::compY()
{
    return n[1];
}

double plane::compZ()
{
    return n[2];
}

void plane::printNormal()
{
    cout<<"Normal Vector:\tx="<<n[0]<<"\ty="<<n[1]<<"\tz="<<n[2]<<endl;
}
