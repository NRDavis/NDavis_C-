/*
links.hpp       -- defines links class
*/
#ifndef LINKS_H
#define LINKS_H

#include "joint.hpp"


class link
{
private:
    double len;
    joint *base;            // The joint from which the link eminates from
    joint *end;             // The end joint of the link
public:

    link(double length, joint &b, joint &e);

    double getLength();     // returns length of the link
    joint * getBase();
    joint * getEnd();

};

link::link(double length, joint &b, joint &e)
{
    len = length;
    base = joint(b);
    end = *joint(e);
}


double link::getLength()
{
    return len;
}

joint* link::getBase()
{
    return base;
}

joint* link::getEnd()
{
    return end;
}

#endif
