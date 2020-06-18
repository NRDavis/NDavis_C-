/*
Author:         Nathan Davis
Date:           6/17/2020
File:           Main.cpp    --- OOP robotics kinematics item 
*/

#include <iostream>
#include <string>       // C++ string class
using namespace std;

#include "joint.hpp"



int main()
{

    joint a;
    cout<<"Joint angle: "<<a.getAngle()<<endl;
    cout<<"Angle - min: "<<a.getMin()<<" Max: "<<a.getMax()<<endl;
    cout<<a.getDes()<<endl;


    cout<<"\n\n\n"<<endl;
    float b_ang = 30;
    float b_ran[2] = {20,30};
    string s = "string";

    joint b(b_ang, b_ran, s);
    b.display();



    return 0;
}


