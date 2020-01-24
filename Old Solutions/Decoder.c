#include <stdio.h>

int main()
{
    int a[3100],n;
    int i,diff;


    while(scanf("%d ",&n) == 1)
    {
        int flag = 1;
       for(i = 0; i < n; i++)
       {
           scanf("%d",&a[i]);
       }

       for(i = 2; i < n; i++)
       {
           diff = abs(a[i-1] - a[i-2]-1);
           if(diff != a[i])
              {
                  flag = 0;

                  break;
              }

       }

       if(flag == 0 ||n == 2)
       {
        printf("Not jolly\n");
        flag = 0;
       }

       if(flag == 1 || n == 1)
        printf("Jolly\n");


    }

    return 0;

}

