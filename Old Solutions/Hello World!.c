#include <stdio.h>

main()
{
    int N,i,count,j=1;

    scanf("%d",&N);

    while(N >= 0)
    {
        i = 2;
        count = 1;
        while(i < N)
        {
            i = (i*2);
            count++;
        }
        if(N<2)
            count = 0;
        printf("Case %d: %d\n",j,count);
        j++;

       scanf("%d",&N);
    }

    return 0;
}
