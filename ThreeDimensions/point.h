#ifndef POINT
#define POINT

/*
This header file defines our point object and several functions we'll use to manipulate data

*/
class point
{
private:
    double x;
    double y;
    double z;

public:

    point();                                                // Default constructor
    point(double xx = 0, double yy = 0, double zz = 0);     // destructor
    point(point &A);                                         // Copy Constructor
    ~point();                                               // Default destructor

    double getX();
    double getY();
    double getZ();

    double dist2Origin();
    double dist2Pt(point A);
};



#endif
