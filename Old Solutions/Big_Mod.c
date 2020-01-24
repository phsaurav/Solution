#include <stdio.h>

long long bigMod(long long b,long long p,int m)
{
    long long res;

    if(p == 0)
    return 1 % m;
    res = bigMod(b,p/2,m);
    res = (res * res) % m;
    if(p % 2 == 1)
    res = (res * b) % m;
    return res;

}

int main()
{
    long long b,p,res;
    int m;

    while(scanf("%lld",&b) != EOF)
    {
        scanf("%lld",&p);
        scanf("%d",&m);

        res = bigMod(b,p,m);

        printf("%lld\n",res);

    }
    return 0;
}