#ifndef MERGESORT
#define MERGESORT

/*
template <typename T>
void Merge(T a[], int L, int M, int R)
{
    int i,j,k;
    int n1 = M - L + 1;
    int n2 = R - M;

    T leftArray[n1], rightArray[n2];

    for(i = 0; i < n1; i++)
        leftArray[i] = a[L+i];
    for(j = 0; j < n2; j++)
        rightArray[j] = a[M+1+j];

    i = 0;
    j = 0;
    k = 1;

    while(i < n1 && j < n2){
        if(leftArray[i] <= rightArray[j]){
            a[k] = leftArray[i];
            i++;
        }else{
            a[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        a[k] = leftArray[i];
        i++;
        k++;
    }

    while(j < n2){
        a[k] = rightArray[j];
        j++;
        k++;
    }
    return;
}








template <typename T>
void mergeSort(T a[], int L, int R)
{
    if(L < R){
        int M = L + (R - 1) / 2;
        mergeSort(a, L, M);
        mergeSort(a, M + 1, R);
        Merge(a, L, M, R);
    }
    */
    /*
    // merge-sort is an intrinsically recursive algorithm
    int M = (L+R)/2;                // we compute the center value of our array
    mergeSort(a, L, M);         // Calling merge sort left
    mergeSort(a, M+1, R);         // Calling merge sort right
    Merge(a, L, M, R);              // merging the left and right arrays
    // merge
    */
    //return;
//}





















// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}















#endif // MERGESORT
