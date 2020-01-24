#include <stdio.h>

int main()
{
    int n, m;
    int arr[200001] = {0};
    int l,r,x,i;

    scanf("%d %d",&n,&m);

    while(m--)
    {
        scanf("%d %d %d",&l,&r,&x);

        for(i = l-1; i < r; i++)
        {
            arr[i] = x;
        }
    }

    for(i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
        if(i == n-1)
        break;
        printf(" ");
    }
    return 0;
}