#include <stdio.h>

main()
{
    int t,n,num,i;
    long long int tot;

    scanf("%d",&t);

    for(i = 0; i <t; i++)
    {
        scanf("%d",&n);

        tot = (315 *n) + 36962;
        tot = tot/10;
        n = tot %10;

        if(n<0)
            n = n*-1;

        printf("%d\n",n);
    }

    return 0;
}
