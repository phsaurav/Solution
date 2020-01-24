#include <stdio.h>
#include <string.h>

int main() 
{
    int n;
    char inLine[26];
    int maxNumX,line,index,numOfSpace;
    
    while(scanf("%d",&n) == 1)
    {
        getchar();
        
        int numOfX[14] = {0};
        numOfSpace = 0;
        maxNumX = 0;
        
        if(n == 0)
            break;
        if(n == 1)
        {
            gets(inLine);
            printf("0\n");
        }
        else
        {
            for(line = 0; line< n; line++)
            {
                gets(inLine);
            
                for(index = 0; index < 25; index++)
                {
                    if(inLine[index] == 'X')
                        numOfX[line]++;
                }
                
                if(numOfX[line] > maxNumX)
                    maxNumX = numOfX[line];
            }
            
            for(line = 0; line < n; line++ )
            {
                if(maxNumX > numOfX[line])
                   numOfSpace += (maxNumX - numOfX[line]); 
            }
            
            printf("%d\n",numOfSpace);
        }
    }
    return 0;
}

