#include <stdio.h>

int main() 
{
    int n,m,c,consum[20],operation[5000],count,total,maxPow,seqNum = 0,tempPos;
    
    scanf("%d %d %d",&n,&m,&c);
    
    while(n != 0 || m != 0 || c != 0)
    {
        seqNum++;
        maxPow = 0;
        int flag = 0;
        total = 0;
        
        for(count = 0; count < n; count++)
        {
            scanf("%d",&consum[count]);
        }
        
        for(count = 0; count < m; count++)
        {
            scanf("%d",&operation[count]);
        }
        
        for(count = 0; count < m; count++)
        {
            tempPos = operation[count] - 1;
            total += consum[tempPos];
            consum[tempPos] = consum[tempPos] * -1;
            
            if(total > c)
            {
                printf("Sequence %d\n",seqNum);
                printf("Fuse was blown.\n");
                flag = 1;
                break;
            }
            else
            {
                if(total > maxPow)
                    maxPow = total;
            }
        }
        
        if(flag == 0)
        {
            printf("Sequence %d\n",seqNum);
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n",maxPow);
        }
        
        printf("\n");
        
        scanf("%d %d %d",&n,&m,&c);
        
    }
    return 0;
}

