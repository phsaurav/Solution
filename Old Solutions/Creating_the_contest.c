#include <stdio.h>

int main()
{
    int n,i,count =0,j;
    int a[200001];

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i = 0; i < n ; i++)
    {
        for(j = i; j+1 < n && (a[j +1] <= a[j]*2); j++);

        count = (count < j - i + 1)? j-i+1: count;

        i = j;
    }

    printf("%d\n", count);
    return 0;
}