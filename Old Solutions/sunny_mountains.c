#include <stdio.h>
#include <math.h>

void sortx(int arr[][2], int lastPos)
{
    int temp1, temp2,i,j;

    for (i = 0; i < lastPos-1; i++)
    {
        for(j = i+1; j < lastPos;j++)
        {
            if(arr[i][0] > arr[j][0])
            {
                temp1 = arr[i][0];
                temp2 = arr[i][1];
                arr[i][0] = arr[j][0];
                arr[i][1] = arr[j][1];
                arr[j][0] = temp1;
                arr[j][1] = temp2;
            }
        }
    }
}

int main()
{
    int inPos[1000][2];
    int temp[1000][2];

    int testCase, pointNum,i,k;
    double sum,x,y;

    scanf("%d", &testCase);

    while (testCase--)
    {
        sum = 0;
        scanf("%d", &pointNum);

        for (i = 0; i < pointNum; i++)
        {
            scanf("%d %d", &inPos[i][0], &inPos[i][1]);
        }

        sortx(inPos, pointNum);

        for(i = 0,k = 0; i < pointNum; i++)
        {

            while(inPos[i][1] >= temp[k-1][1] && k > 0)
            {
                k--;
            }
                temp[k][0] = inPos[i][0];
                temp[k++][1] = inPos[i][1];
        }

        for(i = 0; i < k; i++)
        {
            x = temp[i+1][0] - temp[i][0];
            y = temp[i][1] - temp[i+1][1];

            sum += (double) sqrt((x*x) + (y*y));
            printf("%lf\n",sum);
        }

        printf("%.2lf\n",sum);

    }


    return 0;
}