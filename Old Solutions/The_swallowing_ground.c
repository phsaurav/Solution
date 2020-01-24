#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testCase,column,north,south,diff,oldDiff,firstTime,flag;
    scanf("%d",&testCase);

    for(int test = 0 ; test < testCase; test++)
    {
        firstTime = 1;
        flag = 1;
        scanf("%d",&column);
        if(test > 0)
        printf("\n");

        for(int colNum = 0; colNum < column ; colNum++)
        {
            scanf("%d %d",&north,&south);

            diff = abs(north - south);

            if(firstTime)
            {
                oldDiff = diff;
                firstTime = 0;
            }
            else
            {
                if(diff != oldDiff)
                {
                    flag = 0;
                    break;
                }
            }
        }

        if(flag)
        printf("yes\n");
        else
        printf("no\n");
    }
    return 0;
}