#include <stdio.h>
#include <math.h>

int main()
{

    double F,c,d,e,n;

    while(scanf("%lf",&F) != EOF)
    {
        n = 0;
        c = 1.590178317884934 * F;
        e = F/2.0;
        d = sqrt((c*c) - (e*e));
        n = d/sqrt(2);

        printf("%.10lf\n",n);
    }

    return 0;

}
