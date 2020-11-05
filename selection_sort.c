#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void selectionsort(int A[], int n)
{
    int i, j, min;

    for(i = 0; i < n -1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            if(A[j] < A[min])
            {
                min = j;
            }
        }
        if(j != min)
        {
            swap(&A[i], &A[min]);
        }
    }
}

int main()
{
    int i, n;

    scanf("%d", &n);

    int A[n];

    for (i = 0; i < n ; i++)
    {
        scanf("%d", &A[i]);
    }

    selectionsort(A, n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}