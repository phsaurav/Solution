#include <stdio.h>
#include <string.h>

int main()
{
    int T, dataSize, queryNum, query,i,flag;
    char name[10001][21],output[21];
    int  low[10001], high[10001];

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d",&dataSize);

        for(i = 0; i < dataSize; i++)
        {
            scanf(" %s %d %d",name[i],&low[i],&high[i]);
        }

        scanf("%d",&queryNum);

        while(queryNum--)
        {
            flag = 0;
            scanf("%d",&query);

            for(i = 0; i < dataSize; i++)
            {
                if(query >= low[i] && query <= high[i])
                {
                    strcpy(output,name[i]);
                    flag++;
                }
            }

            if(flag == 1)
            {
                printf("%s\n",output);
            }
            else
            {
                printf("UNDETERMINED\n");
            }
        }
        if(T!=0)
        printf("\n");
    }

    return 0;
}
