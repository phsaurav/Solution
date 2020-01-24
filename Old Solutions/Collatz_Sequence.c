#include <stdio.h>

int termsNum = 0;

int algo(long long int a, int l)
{
    if(a == 1)
    {
        termsNum++;
        return 0;
    }
    if(a > l)
        return 0;
    
    if(a % 2 == 0)
    {
        termsNum++;
        return algo(a/2,l);
    }
    else
    {
        termsNum++;
        return algo((3*a)+1,l);
    }
    
}

int main() 
{
    int a, l,count = 0;
    
    while(scanf("%d %d",&a,&l) == 2)
    {
        if(a < 0 && l <0)
            break;
        count++;
        
        algo(a,l);
        
        printf("Case %d: A = %d, limit = %d, number of terms = %d\n",count,a,l,termsNum);
        
        termsNum = 0;
        
    }
    return 0;
}

