#ifndef INSERTIONSORT
#define INSERTIONSORT

/*
We define several variations of insertionsort
https://en.wikipedia.org/wiki/Insertion_sort
*/

#include <iostream>


template <typename T>
void insertionBasic(T *a, int mag);        // basic form of insertion sort

template <typename T>
void insertionRecur(T a[], int mag);        // recursive form of insertion sort

template <typename T>
void insertionAlt(T a[], int mag);          // slightly faster version of insertion sort

#endif // INSERTIONSORT
