#include <stdio.h>

int main()
{
    int n,k,tot;

    while(scanf("%d %d",&n,&k) != EOF)
    {
        tot = n;
        while(n>=k)
        {
            tot += (n/k);
            n = (n/k)+(n%k);
        }

        printf("%d\n",tot);
    }
    return 0;
}
