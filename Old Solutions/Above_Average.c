#include <stdio.h>

int main()
{
    int testCase, student, num[1001],count,test,aboveAvg;
    long long total;
    double ratio,avg;

    scanf("%d",&testCase);

    for(test = 0; test < testCase ; test++)
    {
        aboveAvg = 0;
        total = 0;
        avg = 0;

        scanf("%d",&student);

        for(count = 0; count < student; count++)
        {
            scanf("%d",&num[count]);
            total += num[count];

        }

        avg = (double) total/student;

        for(count = 0; count < student; count++)
        {
            if(num[count] > avg)
            aboveAvg++;
        }
        
        ratio = (double) aboveAvg / student * 100;
        printf("%.3lf%%\n",ratio);
    }
    return 0;
}