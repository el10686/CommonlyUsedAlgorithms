#include <stdio.h>

void insertionsort(int A[], int n)
{
    int i, j, temp;

    for(i = 1; i < n; i++)
    {
        j = i - 1;
        temp = A[i];

        while(j>=0 && A[j] > temp)
        {
            A[j + 1] = A[j];
            j--;
        }

        A[j+1] = temp;

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

    insertionsort(A, n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
