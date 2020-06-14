#include <iostream>

#include "point.h"
#include "line.h"
/*
Author:         Nathan Davis
Date:           6/13/2020
Intent:         Demonstrate how to use Object Oriented Programming to implement vector calculus calculations.
*/


using namespace std;

int main()
{
    point a(5,6,7);
    point b(0,0,0);
    //cout <<"Point Object A:\t\tX:"<<a.getX()<<"\tY:"<<a.getY()<<"\tZ:"<<a.getZ()<<endl;
    //cout<<"Distance to origin:\t"<<a.dist2Origin()<<endl;
    //cout <<"Point Object B:\t\tX:"<<b.getX()<<"\tY:"<<b.getY()<<"\tZ:"<<b.getZ()<<endl;
    //cout<<"Distance to point B:\t"<<a.dist2Pt(b)<<endl;

    point c(a);
    //cout <<"Point Object C:\t\tX:"<<c.getX()<<"\tY:"<<c.getY()<<"\tZ:"<<c.getZ()<<endl;

    //line abc;
    line l(a,b);
    cout<<"We define a line from point A to point B.\nThe line intersects point ("<<l.offsetX()<<","<<l.offsetY()<<","<<l.offsetZ()<<")"<<endl;

    return 0;
}
