#include <stdio.h>

int main()
{
    int n, max, num,i,j,k,l;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&max);
        scanf("%d",&num);


        for(l = 0; l < num; l++)
        {
        for(j = 1 ; j <= max ; j++)
        {
            for(k = 0; k < j ;k++)
                printf("%d",j);
                printf("\n");
        }

        for(j = j-2 ; j > 0 ; j--)
        {
            for(k = 0; k < j ;k++)
                printf("%d",j);
                printf("\n");
        }
        if(l < num-1)
         printf("\n");
        }
        if(i < n-1)
        printf("\n");

    }
    return 0;

}
