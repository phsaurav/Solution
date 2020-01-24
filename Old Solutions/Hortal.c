#include <stdio.h>

int main()
{
    int T,days,P,par,row,col,hortal,hDay;

    scanf("%d",&T);

    for(int test = 0; test < T; test++)
    {
        hortal = 0;
       int cal[524][8] = {0};

       scanf("%d",&days);
       scanf("%d",&P);

       for(int i = 0; i < P; i++)
       {
           scanf("%d",&par);
           hDay = par;
           if(days == 0 || par == 0 || par > days)
           continue;
           do{
               if(hDay > 7)
               {
                   row = hDay/7;
                   col = (hDay % 7) - 1;
               }
               else
               {
                   row = 0;
                   col = hDay - 1;
               }

               cal[row][col] = 1;
               hDay += par;

           }while(hDay <= days);
       }

       for(row = 0; row <= (days/7); row++)
       {
           for(col = 0; col < 5; col++)
           {
               if(cal[row][col] == 1)
               hortal++;
           }
       } 

       printf("%d\n",hortal);
    }

    return 0;
}