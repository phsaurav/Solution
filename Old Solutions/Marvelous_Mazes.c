#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char inputLine[5000];
    int pos,lineLength,tempNum,count;
    
    
    while(gets(inputLine) != 0)
    {
        
        lineLength = strlen(inputLine);
        tempNum = 0;
        
        for(pos = 0; pos < lineLength; pos++)
        {
            if(isdigit(inputLine[pos]))
            {
                tempNum += (inputLine[pos] - '0');
            }
            else
            {
                if(inputLine[pos] == 'b')
                {
                    for(count = 0; count < tempNum; count++)
                    {
                        printf(" ");
                    }
                    
                    tempNum = 0;
                }
                else if(inputLine[pos] == '!')
                {
                    printf("\n");
                }
                else
                {
                    for(count = 0; count < tempNum; count++)
                    {
                        printf("%c",inputLine[pos]);
                    }
                    
                    tempNum = 0;
                }
            }
        }
        
        printf("\n");
    }
    return 0;
}

