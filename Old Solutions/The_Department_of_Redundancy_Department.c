#include <stdio.h>

int main() 
{
    int inputInt,totalNum = 0,check,flag;
    int num[100000],times[100000] = {0};
    
    while(scanf("%d",&inputInt) != EOF)
    {
        flag = 0;
        for(check = 0; check < totalNum; check++)
        {
            if(num[check] == inputInt)
            {
                times[check]++;
                flag = 1;
            }
        }
        
        if(flag == 0)
        {
            num[totalNum] = inputInt;
            times[totalNum]++;
            totalNum++;
        }
    }
    
    for(check = 0; check < totalNum; check++)
    {
        printf("%d %d\n",num[check],times[check]);
    }
    
    return 0;
}

