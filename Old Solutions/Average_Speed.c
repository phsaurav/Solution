#include <stdio.h>
#include <string.h>

int main()
{
    char tempInput[100];
    double hour, min, sec, speed, oldTime = 0, totTime, timeDiff = 0, distance = 0, tempSpeed;

    while (gets(tempInput) != NULL)
    {
        if (tempInput[8] != 0)
        {
            sscanf(tempInput, "%lf:%lf:%lf %lf", &hour, &min, &sec, &speed);
            totTime = (hour * 3600) + (min * 60) + sec;

            timeDiff = totTime - oldTime;

            distance += (timeDiff * (tempSpeed / 3600));
            tempSpeed = speed;
        }
        else
        {
            sscanf(tempInput, "%lf:%lf:%lf", &hour, &min, &sec);

            totTime = (hour * 3600) + (min * 60) + sec;
            timeDiff = totTime - oldTime;

            distance += (timeDiff * (tempSpeed / 3600));

            printf("%02.0lf:%02.0lf:%02.0lf %.2lf km\n", hour, min, sec, distance);
        }

        oldTime = (hour * 3600) + (min * 60) + sec;
    }

    return 0;
}