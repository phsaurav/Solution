#include <stdio.h>

int main() 
{
    double h,u ,d,f,climbed,factor;
    int day,flag;
    
    scanf("%lf %lf %lf %lf",&h,&u,&d,&f);
    
    while(h > 0)
    {
        day = 0;
        flag = 0;
        climbed = 0;
        factor = u* (f/100);
        
        while(climbed <= h)
        {
            u = (u < 0)? 0 : u;
            
            climbed += u;
            u -= factor;
            day++;
            if(climbed > h)
                break;
            climbed -= d;
            
            if(climbed < 0)
            {
                printf("failure on day %d\n",day);
                flag = 1;
                break;
            }
                
        }
        
        if(flag == 0)
            printf("success on day %d\n",day);
        
        scanf("%lf %lf %lf %lf",&h,&u,&d,&f);
        
    }
    return 0;
}

