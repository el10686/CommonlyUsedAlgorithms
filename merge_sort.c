#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void merge(int A[], int left, int mid, int right)
{
    int n, m, i, j, k;

    n = mid - left + 1;
    m = right - mid;

    int L[n], R[m];

    for(i = 0; i < n; i++)
    {
        L[i] = A[left + i];
    }

    for(i = 0; i < m; i++)
    {
        R[i] = A[mid + 1 + i];
    }

    i = 0;
    j = 0;
    k = left;

    while(i < n && j < m)
    {
        if(L[i] <= R[j])
        {
            A[k++] = L[i++];
        }
        else
        {
            A[k++] = R[j++];
        }
    }

    while(i < n)
    {
        A[k++] = L[i++];
    }

    while(j < m)
    {
        A[k++] = R[j++];
    }

}

void mergesort(int A[], int left, int right)
{
    if(left < right)
    {
        int mid;

        mid = (left + right) / 2;

        mergesort(A, left, mid);
        mergesort(A, mid + 1, right);
        merge(A, left, mid, right);
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

    mergesort(A, 0, n - 1);

    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}