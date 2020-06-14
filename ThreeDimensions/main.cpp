#include <iostream>
#include "point.hpp"
#include "line.hpp"
#include "plane.hpp"



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

    if(d.parallel(c)){
        cout<<"Lines D and C are parallel -- correct."<<endl;
    }else{
        cout<<"Lines D and C are not determined to be parallel -- fix this."<<endl;
    }

    point k(-1,-1,1);
    line e(a,k);
    if(d.parallel(e)){
        cout<<"Lines D and e are determined to be parallel -- fix this."<<endl;
    }else{
        cout<<"Lines D and e are not parallel -- correct."<<endl;
    }

    cout<<"\n\n"<<endl;
    point p1(0,0,0);
    point p2(1,1,1);
    point p3(-2,2,2);

    plane pl(p1,p2,p3);
    pl.printNormal();

    return 0;
}
