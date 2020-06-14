#include <iostream>
#include "insertionsort.hpp"
using namespace std;

template <typename T>
void printArray(T A[], int mag);

template <typename T>
void dumbSort(T A[], int mag);






int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int b[8] = {5,1,2,3,6,7,8,4};
    double c[8] = {10.0, 12.2, 6.2, 3.4, 45.8,78,98.9,100.0};
    //cout<<a[0]<<endl;

    printArray(a, 10);  // testing out printArray()

    dumbSort(b,8);      // testing dumbSort<int>()
    printArray(b,8);

    dumbSort(c,8);      // testing dumbSort<double>()
    printArray(c,8);
    //insertionBasic(a, 2);
    return 0;
}








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

template <typename T>
void dumbSort(T A[], int mag)
{
    int i, j;
    for(i = 0; i < mag - 1; i++)
    {
        for(j=i+1; j < mag; j++)
        {
            if(A[i]>A[j])
            {
                T tmp = A[j];
                A[j] = A[i];
                A[i] = tmp;
            }
        }
    }
    return;
}



