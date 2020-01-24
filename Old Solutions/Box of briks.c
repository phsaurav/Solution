#include <stdio.h>

main()
{
    int n,tot,i,hi,set = 1;
    int a[51];

    scanf("%d",&n);

    while(n != 0)
    {
        tot = 0;
        for(i = 0 ; i < n ; i++)
        {
            scanf("%d",&a[i]);
            tot += a[i];
        }
        hi = tot/n;
        tot = 0;

        for(i = 0; i < n; i++)
        {
            if(a[i] > hi)
            {
                tot += (a[i] - hi);
            }
        }

        printf("Set #%d\n",set);
        printf("The minimum number of moves is %d.\n\n",tot);

        scanf("%d",&n);
        set++;

    }
    return 0;
}
