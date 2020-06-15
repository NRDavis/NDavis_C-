#ifndef BUBBLESORT
#define BUBBLESORT

template <typename T>
void bubbleSort(T A[], int mag)
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

#endif // BUBBLESORT
