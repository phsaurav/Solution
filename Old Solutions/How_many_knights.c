#include <stdio.h>
#include <math.h>

int main()
{
    double m,n,knightNum,test;
    scanf("%lf %lf",&m,&n);
    while(m != 0 || n != 0)
    {
        if(m == 1)
        knightNum = n;
        else if(n == 1)
        knightNum = m;
        else if(m == 2)
        knightNum = 2 * (ceil(n/4) + ceil((n-1)/4));
        else if(n == 2)
        knightNum = 2 * (ceil(m/4) + ceil((m-1)/4));
        else
        knightNum = ceil((m *n) /2);

        printf("%.0lf knights may be placed on a %.0lf row %.0lf column board.\n",knightNum,m,n);
        scanf("%lf %lf",&m,&n);
    }

    return 0;
}