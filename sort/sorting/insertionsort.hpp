#ifndef INSERTIONSORT
#define INSERTIONSORT

/*
We define several variations of insertionsort
https://en.wikipedia.org/wiki/Insertion_sort
*/

//#include <iostream>

/*
template <typename T>
void insertionBasic(T a[], int mag);        // basic form of insertion sort
*/

template <typename T>
void insertionBasic(T a[], int mag)
{
    T key;
    int j;
    for(int i = 1; i<mag; i++){
        key = a[i];
        j = i;
        while(j>0 && a[j-1]>key){
            a[j] = a[j-1];
            j--;
        }
        a[j] = key;
    }
    return;
}



/*
template <typename T>
void insertionRecur(T a[], int mag);        // recursive form of insertion sort

template <typename T>
void insertionAlt(T a[], int mag);          // slightly faster version of insertion sort
*/


#endif // INSERTIONSORT
