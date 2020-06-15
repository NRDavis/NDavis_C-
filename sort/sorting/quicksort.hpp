#ifndef QUICKSORT
#define QUICKSORT


template <typename T>
int QuickPart(T a[], int low, int high)
{
    T pivot = a[high];
    int i = low;
    for(int j = low; j < high; j++){
        if(a[j] < pivot){
            // swapping a[i] with a[j]
            T tmp = a[j];
            a[j] = a[i];
            a[i] = tmp;
            i++;
        }
    }

    // swap A[i] with A[high}
    T tmp2 = a[high];
    a[high] = a[i];
    a[i] = tmp2;
    return i;
}




template <typename T>
void quickSort(T a[], int low, int high)
{
    if(low < high){
        int p = QuickPart(a,low,high);
        quickSort(a,low,p-1);
        quickSort(a,p+1,high);
    }
}






#endif // QUICKSORT
