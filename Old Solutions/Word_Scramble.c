#include <stdio.h>
#include <string.h>

int main() 
{
    char inputLine[5000];
    char tempWord[100];
    int pos,startPos,lineLength,tempPos,wordLength;
    
    while(gets(inputLine) != 0)
    {
        startPos = 0;
        
        lineLength = strlen(inputLine);
        pos = 0;
        
        while(pos < lineLength)
        {
        
            for(pos = startPos,tempPos = 0; inputLine[pos] != ' ' && inputLine[pos] != '\0'; pos++,tempPos++ )
            {
                tempWord[tempPos] = inputLine[pos];
            }
            
            tempPos--;
            
            for(pos = startPos; tempPos >= 0; tempPos--,pos++)
            {
                inputLine[pos] = tempWord[tempPos];
            }
            
            startPos = pos+1;
                
        }
        
        puts(inputLine);
    }
    
    return 0;
}

