#include <stdio.h>
#include <math.h>

main()
{
    int a,b,c,d,k,l,m;

    scanf("%d %d %d",&k,&l,&m);

    while(k != 0 && l != 0 && m != 0)
    {
        if(k == l && l == m)
        {
            printf("wrong\n");
        }
        else{

        if(k>l)
        {
            if(k>m)
            {
                c = k;
                a = l;
                b = m;
            }
            else
            {
                c = m;
                a = l;
                b = k;
            }

        }
        else
        {
            if(l>m)
            {
                c = l;
                a = k;
                b = m;
            }
            else
            {
                c = m;
                a = l;
                b = k;
            }
        }
        d = sqrt((a*a)+(b*b));

        if(d == c)
            printf("right\n");
        else
            printf("wrong\n");
        }

        scanf("%d %d %d",&k,&l,&m);
    }
    return 0;
}
