#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i,j,last = 3;
    int *prime;
    int limit = 18500000;
    int list[100001][2];

    prime = (int*) malloc(sizeof(int) * limit);

    for(i = 3; i < limit; i += 2)
    {
        prime[i] = 1;
    }

    for(i = 3; i <= 4400; i += 2)
    {
        if(prime[i])
        {
            for(j = i; i*j <= limit; j++)
            {
                prime[i*j] = 0;
            }
        }
    }

    for(i = 3,j = 0; j <= 100000; i += 2)
    {
        if(prime[i])
        {
            if(i - last == 2)
            {
                list[j][0] = last;
                list[j][1] = i;
                last = i;
                j++;
            }
            else
            last = i;
        }
    }
    

    while(scanf("%d",&n) != EOF)
    {
        printf("(%d, %d)\n",list[n-1][0],list[n-1][1]);
    }
    free(prime);

    return 0;
}
