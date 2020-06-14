#include <iostream>
#include "point.hpp"
#include "line.hpp"




using namespace std;

int main()
{
    point a(1,1,1);
    point b(3,3,3);

    line c(a,b);
    cout <<"Point a:"<<a.getX()<<" "<<a.getY()<<" "<<a.getZ()<< endl;
    cout <<"Point b:"<<b.getX()<<" "<<b.getY()<<" "<<b.getZ()<< endl;
    cout <<"Line c:"<<c.dirX()<<" "<<c.dirY()<<" "<<c.dirZ()<< endl;
    line d(c);
    cout <<"Line d:"<<d.dirX()<<" "<<d.dirY()<<" "<<d.dirZ()<< endl;





    return 0;
}
