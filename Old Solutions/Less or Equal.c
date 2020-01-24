#include <stdio.h>
#include <stdlib.h>

void mergeSort(int arr[], int left, int right);
void merge(int arr[], int l, int m, int r);

int main()
{
    int n, k, x;
    int seq[200010];

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &seq[i]);
    }

    mergeSort(seq, 0, n - 1);
    x = seq[k] - 1;

    if (k == 0)
    {

        if (x > 0)
            printf("%d\n", x);
        else
            printf("-1\n");
    }
    else if( k == n)
    {
        printf("%d\n",seq[k-1]);
    }
    else
    {
        
        if (x >= seq[k - 1])
            printf("%d\n", x);
        else
            printf("-1\n");
        return 0;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

