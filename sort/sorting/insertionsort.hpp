#ifndef INSERTIONSORT
#define INSERTIONSORT

/*
We define several variations of insertionsort
https://en.wikipedia.org/wiki/Insertion_sort
*/

template <typename T>
void insertionSort(T a[], int mag)
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

#endif // INSERTIONSORT
