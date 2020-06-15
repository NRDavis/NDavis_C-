#ifndef VECTOR_H
#define VECTOR_H

template <typename T>
class Vector
{
private:
    int length;                         // integer representing the length of our vector
    T *v;                               // pointer to an array of our data
public:
    Vector(T a[], int length);          // Constructor
    Vector(Vector &a);                  // Copy Constructor

    void append(T b[]);                 // we append items from an array
    void remove();                      // we remove items from our Vector
};

Vector::Vector(T a[], int length)
{

}

Vector(Vector &a);


void Vector::append(T b[])
{

}

void Vector::remove()
{

}







#endif // VECTOR_H
