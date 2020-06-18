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


    double getLength();     // returns length of the link

};



double link::getLength()
{
    return len;
}


#endif
