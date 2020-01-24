#include <stdio.h>
#include <math.h>

int count;
void primeFactors(int n);

void primeFactors(int n)
{
    while (n%2 == 0)
    {
        count++;
        n = n/2;
    }

    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            count++;
            n = n/i;
        }
    }
    if (n > 2)
        count++;
}

int main()
{
    int T,N;

    scanf("%d",&T);

    for(int i = 0; i < T; i++)
    {
        count = 0;
        scanf("%d",&N);
        primeFactors(N);
        printf("Case %d: %d\n",i+1,count);
    }
    return 0;
}