#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int A[], int left, int right)
{
    int i, j, pivot;

    pivot = A[right];

    i = left - 1;

    for(j = left; j < right; j++)
    {
        if(A[j] <= pivot)
        {
            i++;
            swap(&A[j], &A[i]);
        }
    }
    swap(&A[i + 1], &A[right]);
    return i+1;

}

void quicksort(int A[], int left, int right)
{
    if(left < right)
    {
        int pi;

        pi = partition(A, left, right);
        quicksort(A, left, pi -1);
        quicksort(A, pi + 1, right);
    }
}

int main()
{
    int i, n;

    scanf("%d", &n);

    int A[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    quicksort(A, 0, n - 1);

    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}