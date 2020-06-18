/*
joint.hpp       -- defines joint class
*/


#ifndef JOINT_H
#define JOINT_H

#include <iostream>
#include <string>
using namespace std;

class joint
{
private:
    float angle;                // the angle of the joint
    float range[2];             // defines the min, max angles for this joint
    string description;         // simple description string input used for describing motor, or other specifics
public:

    joint();            // default constructor
    joint(float ang, float *ran, const string s);   // constructor
    joint(const joint &j);    // copy constructor
    ~joint();           // default destructor

    float getAngle();
    float getMin();
    float getMax();
    string getDes();

    void setAngle(float a);            // set the current angle of the joint
    void setMin(float m);              // reset the minimum angle for the joint
    void setMax(float m);              // reset the maximum angle for the joint
    void setDes(const string s);

    void display();
};


joint::joint()
{
    angle = 0;      // we initialize angle to zero
    range[0] = 0;   // minimum joint angle of zero degrees 
    range[1] = 360; // maximum joint angle of 360 degrees
    description = string("None");
}

joint::joint(float ang, float *ran, const string s)
{
    angle = ang;
    range[0] = ran[0];
    range[1] = ran[1];
    description = string(s);    
}

joint::joint(const joint &j)
{
    angle = j.angle;
    range[0] = j.range[0];
    range[1] = j.range[1];
    description = j.description;
}


joint::~joint()
{

}




void joint::setMax(float m)
{
    range[1] = m;
}

void joint::setMin(float m)
{
    range[0] = m;
}

void joint::setAngle(float a)
{
    angle = a;
}

void joint::setDes(const string &s)
{
    description = string(s);
}



float joint::getAngle()
{
    return angle;
}

float joint::getMin()
{
    return range[0];
}

float joint::getMax()
{
    return range[1];
}

string joint::getDes()
{
    return description;     // string description
}

void joint::display()
{
    cout<<"Joint angle: "<<this->getAngle()<<endl;
    cout<<"Angle - min: "<<this->getMin()<<" Max: "<<this->getMax()<<endl;
    cout<<this->getDes()<<endl;
}


#endif
