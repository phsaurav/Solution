#include <stdio.h>
#include <math.h>

main()
{
    int a,b,tot,temp;

    scanf("%d %d",&a,&b);

    while(a != 0 || b != 0)
    {
        tot = 0;
        if(a <= b)
        {
        temp = sqrt(a);
        if((temp * temp) == a && a != 0 )
            tot++;
            a = temp+1;
        for(temp = 0; temp <= b; a++)
        {

            temp = a*a;
            if(temp <= b)
            tot++;

        }
        }

        printf("%d\n",tot);
        scanf("%d %d",&a,&b);
    }
    return 0;
}
