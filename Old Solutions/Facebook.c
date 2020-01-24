#include <stdio.h>
#include <math.h>

int main()
{
    int T,finalH,count = 0;
    double H,M,total,initial,finalM;

    scanf("%d",&T);
    
    while(T--)
    {
        scanf("%lf:%lf",&H,&M);

        if(H == 0 && M == 0)
        {
            printf("Case %d: 0:0\n",++count);
            continue;
        }
        total = H + (M/60);

        initial = (total - 37.5)/30;

        if(initial < 0)
        {
            printf("Case %d: NOT POSSIBLE\n",++count);
            continue;
        }
        finalH = (int) floor(initial);
        finalM = initial - finalH;
        finalM = finalM * 60;

        printf("Case %d: %d:%.0lf\n",++count,finalH,finalM);

    }
    
    return 0;
}