#include <stdio.h>
#include <math.h>

int main()
{
    int testCase,m,n,r,k,Q,K;
    char name;

    scanf("%d",&testCase);

    for(int test = 0; test < testCase; test++)
    {
        scanf(" %c",&name);
        scanf("%d %d",&m,&n);

        switch(name)
        {
            case 'r':
            r = (m > n)? n: m;
            printf("%d\n",r);
            break;

            case 'k':
            k = ceil((double)(m*n)/2);
            printf("%d\n",k);
            break;

            case 'Q':
            Q = (m > n)? n: m;
            printf("%d\n",Q);
            break;

            case 'K':
            if(m%2 != 0)
            m++;
            if(n%2 != 0)
            n++;
            K = (m*n)/4;
            printf("%d\n",K);
            break;

        }
    }
    return 0;
}