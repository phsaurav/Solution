#include <stdio.h>
#include <math.h>
int gcd(int a, int b);

int main()
{
    int T,m,n;
    int res,g;

    scanf("%d",&T);

    for(int i = 0; i< T; i++)
    {
        scanf("%d %d",&m,&n);

        g = gcd(m,n);

        res = ceil((m+n)*1.0/g);

        printf("Case %d: %d\n",i+1,res);
    }
    return 0;
}

int gcd(int a, int b)
{
    if(a % b == 0)
    return b;

    return gcd(b,a%b);
}