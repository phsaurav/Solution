#include <stdio.h>
#include <string.h>

int main() 
{
    char keyS[] = {'`','1','2','3','4','5','6','7','8','9','0','-','=','q','w','e','r','t','y','u','i','o','p','[',']','\\','a','s','d','f','g','h','j','k','l',';','\'','z','x','c','v','b','n','m',',','.','/'};
    char keyC[] = {'`','1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']','\\','A','S','D','F','G','H','J','K','L',';','\'','Z','X','C','V','B','N','M',',','.','/'};
    char inputLine[100000];
    int stringLen,pos,keyPos;
    
    while(scanf(" %[^\n]",inputLine) != EOF)
    {
        stringLen = strlen(inputLine);
        
        for(pos = 0; pos < stringLen; pos++)
        {
            for(keyPos = 0; keyPos <= 47 ; keyPos++)
            {
                if(inputLine[pos] == ' ')
                {
                    break;
                }
                if(inputLine[pos] == keyS[keyPos])
                {
                    inputLine[pos] = keyS[keyPos - 2];
                    break;
                }
                else if(inputLine[pos] == keyC[keyPos])
                {
                    inputLine[pos] = keyS[keyPos - 2];
                    break;
                }
            }
        }
        
        puts(inputLine);
    }
    
    
    return 0;
}
    

