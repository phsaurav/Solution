#include <stdio.h>

int main()
{
    int duration, depNum,monthNum[101],count,tempMonth;
    double downPay, total, depRate[101],initial,owes,value,depAmount,monthPay,tempdepRate;

    scanf("%d %lf %lf %d",&duration,&downPay,&total,&depNum);

    while(duration >= 0)
    {
        owes = total;

        for(count = 0; count < depNum; count++)
        {
            scanf("%d %lf",&monthNum[count], &depRate[count]);
        }

        initial = total + downPay;

        depAmount = initial * depRate[0];
        value = initial - depAmount;
        monthPay = total/duration;

        tempMonth = 0;
        count = 1;

        while(owes >= value)
        {
            tempMonth++;

            for(int temp = count; temp < depNum; temp++)
            {
                if(tempMonth == monthNum[temp])
                {
                    tempdepRate = depRate[temp];
                    count++;
                }
            }
            
            depAmount = value * tempdepRate;
            
            owes -= monthPay;
            value -= depAmount;

        }

        if(tempMonth == 1)
        printf("1 month\n");
        else
        printf("%d months\n",tempMonth);

        scanf("%d %lf %lf %d",&duration,&downPay,&total,&depNum);
    }

    return 0;
}