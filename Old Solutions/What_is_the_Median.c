#include <stdio.h>

int main()
{
    int count = 0,firstTime;
    long long med1,med2,outMed,series[10001],temp;

    while(scanf("%lld",&series[count++]) != EOF)
    {
        firstTime = 1;
        for(int i = count-1; i > 0; i--)
        {
            if(series[i] < series[i-1])
            {
                firstTime = 0;
                temp = series[i];
                series[i] = series[i-1];
                series[i-1] = temp;
            }
            
            if(firstTime)
            break;
        }
        if(count % 2 == 0)
        {
            med2 = count/2;
            med1 = med2 - 1;
            outMed = (series[med1] + series[med2]) / 2;
        }
        else
        {
            med1 = count/2;
            outMed = series[med1];
        }

        printf("%lld\n",outMed);
    }
    return 0;
}