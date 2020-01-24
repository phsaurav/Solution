#include <stdio.h>

int gcd(int a, int b);

main()
{
    int N,G;
    int i,j;

    scanf("%d",&N);

    while(N != 0)
    {
        G = 0;

        for(i = 1; i<= N; i++)
        {
            for(j = i+1; j <= N; j++)
            {
                G += gcd(i,j);
            }
        }
        printf("%d\n",G);

        scanf("%d",&N);
    }
    return 0;
}

int gcd(int a, int b)
{
    if(a % b == 0) return b;
    return gcd(b,a%b);
}
