#include <iostream>

using namespace std;
long long mem[100000001];

long long convert (long long n)
{
    long long afterchange;

    if(n == 1 || n == 0)
        return n;

    if(n < 100000000 && mem[n] != 0)
        return mem[n];

    afterchange = convert(n/2) + convert(n/3)+ convert(n/4);

    if(afterchange > n)
    {
        if(n < 100000000)
        mem[n] = afterchange;
        return afterchange;
    }

    return n;
    
}

int main()
{
    long long n, out;

    while(scanf("%lld",&n) != EOF)
    {
        out = convert(n);
        printf("%lld\n",out);
    }
    return 0;
}