#include <stdio.h>

int main()
{
    int n, m,i,gamePos = 0,billPos = 0,count = 0;
    int game[1001],bill[1001];

    scanf("%d %d",&n,&m);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&game[i]);
    }
    for(i = 0; i < m; i++)
    {
        scanf("%d",&bill[i]);
    }

    for(gamePos = 0; gamePos < n; gamePos++)
    {
        if(bill[billPos] >= game[gamePos])
        {
            count++;
            billPos++;
        }
    }

    printf("%d\n",count);
    return 0;
}