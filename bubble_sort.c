#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int A[], int n)
{
    int i, j, temp;

    for(i = 1; i < n; i++)
    {
        for(j = 0; j < n - i; j++)
        {
            if(A[j] > A[j + 1])
            {
                swap(&A[j], &A[j + 1]);
            }
        }
    }
}

int main() {

    int i, n;

    scanf("%d", &n);

    int A[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    bubblesort(A, n);

    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}