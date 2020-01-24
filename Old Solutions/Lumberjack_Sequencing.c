#include <stdio.h>

int main()
{
    int testCase,bHeight[11],order,pos,first = 1;

    scanf("%d",&testCase);

    while(testCase--)
    {
        order = 0;

        for(int count = 0; count < 10; count++)
        {
            scanf("%d",&bHeight[count]);
        }

        if(bHeight[0] < bHeight[1])
        {
            order =1;
            for(pos = 1; pos < 9; pos++)
            {
                if(bHeight[pos] > bHeight[pos+1])
                {
                    order =0;
                    break;
                }
            }
        }
        else if (bHeight[0] > bHeight[1])
        {
            order = 1;
            for(pos = 1; pos < 9; pos++)
            {
                if(bHeight[pos] < bHeight[pos+1])
                {
                    order =0;
                    break;
                }
            }
        }
        if(first)
        printf("Lumberjacks:\n");
        first = 0;

        if(order)
        {
            printf("Ordered\n");
        }
        else
        printf("Unordered\n");
    }
    return 0;
}