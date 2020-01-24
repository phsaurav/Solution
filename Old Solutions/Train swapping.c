#include <stdio.h>

int main()
{
    int N,L,i,j,m,n,temp,tot;
    int l[51];

    scanf("%d",&N);

    for(i = 0; i < N; i++)
    {
        tot = 0;

        scanf("%d",&L);

        for(j = 0; j <L; j++)
        {
            scanf("%d",&l[j]);
        }

        for(m = 0; m < L; m++)
        {
            for(n = 0; n < L-m-1; n++)
            {
                if(l[n]>l[n+1])
                {
                    temp = l[n];
                    l[n] = l[n+1];
                    l[n+1] = temp;
                    tot++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n",tot);

    }
    return 0;
}
