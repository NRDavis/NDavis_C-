#ifndef PRINTARRAY
#define PRINTARRAY

#include <iostream>
using namespace std;

template <typename T>
void printArray(T A[], int mag)
{
    int i;
    cout<<"Printing ARRAY\n\t";
    for(i=0; i < mag; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

#endif // PRINTARRAY
