#include <stdio.h>

main()
{
    double x1,y1,x2,y2,x3,y3,x,y;
    double i1,j1,i2,j2,i3,j3,i4,j4;

    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&i1,&j1,&i2,&j2,&i3,&j3,&i4,&j4) != EOF)
    {
        if(i1 == i3 && j1 == j3)
        {
            x2 = i1;
            y2 = j1;
            x1 = i2;
            y1 = j2;
            x3 = i4;
            y3 = j4;
        }
         else if(i1 == i4 && j1 == j4)
        {
            x2 = i1;
            y2 = j1;
            x1 = i2;
            y1 = j2;
            x3 = i3;
            y3 = j3;
        }
         else if(i2 == i4 && j2 == j4)
        {
            x2 = i2;
            y2 = j2;
            x1 = i1;
            y1 = j1;
            x3 = i3;
            y3 = j3;
        }
         else if(i2 == i3 && j2 == j3)
        {
            x2 = i2;
            y2 = j2;
            x1 = i1;
            y1 = j1;
            x3 = i4;
            y3 = j4;
        }

        x = (x1+x3) - x2;
        y = (y1 + y3) - y2;

        printf("%.3lf %.3lf\n",x,y);
    }

    return 0;
}
