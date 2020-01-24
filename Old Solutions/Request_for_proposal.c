#include <stdio.h>
#include <string.h>

int main()
{
    int n, p,rfpNum = 0,r,firstTime = 0;
    char reqList[81],pName[81],reqMet[81],bestProp[81];
    double c,d,oldc,oldd;

    scanf("%d %d",&n,&p);

    while(n != 0 && p != 0)
    {
        getchar();
        oldc = 0;
        oldd = 0;
        rfpNum++;

        for(int req = 0; req < n; req++)
        {
            gets(reqList);
        }
        for(int prop = 0; prop < p ; prop++)
        {
            gets(pName);
            scanf("%lf %d",&d,&r);
            getchar();

            for(int met = 0; met < r; met++)
            {
                gets(reqMet);
            }

            c = (double) r/n;

            if(c > oldc)
            {
                oldc = c;
                oldd = d;
                strcpy(bestProp,pName);
            }
            else if( c == oldc)
            {
                if(d < oldd)
                {
                    oldc = c;
                    oldd = d;
                    strcpy(bestProp,pName);
                }
            }

        }
        if(firstTime)
        printf("\n");

        firstTime = 1;

        printf("RFP #%d\n",rfpNum);
        printf("%s\n",bestProp);

        scanf("%d %d",&n,&p);
    }
    return 0;
}