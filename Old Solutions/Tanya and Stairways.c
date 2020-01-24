#include <stdio.h>

int main()
{
    int n,i,stairNum = 0,step[1010] = {0};
    int stair[1010];

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&stair[i]);
    }

    int j = 0;

    for(i = 0; i < n; i++)
    {
        if(stair[i] == 1)
        {
            stairNum++;
            j++;
        }
        step[j]++;
    }

    printf("%d\n",stairNum);

    for(i = 1; i <= stairNum; i++)
    {
        printf("%d ",step[i]);
    }
    printf("\n");
    
    return 0;
}