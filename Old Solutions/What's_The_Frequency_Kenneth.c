#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char inputLine[10000];
    int pos,maxNum,stringLen,tempPos;
    
    while(gets(inputLine) != 0)
    {
        int charNumS[26] = {0};
        int charNumC[26] = {0};
        maxNum = 0;
        
        stringLen = strlen(inputLine);
        
        for(pos = 0; pos < stringLen; pos++)
        {
            
            if(isalpha(inputLine[pos]))
            {
                if(inputLine[pos] >= 'A' && inputLine[pos] <= 'Z')
                {
                    tempPos = inputLine[pos] - 'A';
                    charNumC[tempPos]++;
                    
                    maxNum = (charNumC[tempPos] > maxNum)? charNumC[tempPos]:maxNum;
                }
                
                if(inputLine[pos] >= 'a' && inputLine[pos] <= 'z')
                {
                    tempPos = inputLine[pos] - 'a';
                    charNumS[tempPos]++;
                    
                    maxNum = (charNumS[tempPos] > maxNum)? charNumS[tempPos]:maxNum;
                }
            }
        }
        
        for(pos = 0; pos < 26; pos++)
        {
            if(charNumC[pos] == maxNum)
            {
                printf("%c",(char)(pos+'A'));
            }
        }
        
        for(pos = 0; pos < 26; pos++)
        {
            if(charNumS[pos] == maxNum)
            {
                printf("%c",(char)(pos+'a'));
            }
        }
        
        printf(" %d\n",maxNum);
    }
    return 0;
}

