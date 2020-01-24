#include <stdio.h>
#include <string.h>

int main() 
{
    char inputName[20];
    int firstTime = 0,tempCode,pos,stringLen,firstChar,codePos,lastCode;
    
    while(scanf("%s",inputName) != EOF)
    {
        char soundCode[5] = {'0','0','0','0','0'};
        firstChar = 1;
        codePos = 0;
        tempCode = 0;
        
        if(!firstTime)
        {
            printf("         NAME                     SOUNDEX CODE\n");
            firstTime = 1;                   
        }
        
        stringLen = strlen(inputName);
        
        for(pos = 0; pos < stringLen ; pos++)
        {
            if(firstChar)
            {
                soundCode[codePos] = inputName[pos];
                codePos++;
            }
            if(inputName[pos] == 'A' || inputName[pos] == 'E' || inputName[pos] == 'I' || inputName[pos] == 'O' || inputName[pos] == 'U' || inputName[pos] == 'Y' || inputName[pos] == 'W' || inputName[pos] == 'H')
            {
                lastCode = -1;
            }
            else if(inputName[pos] == 'B' || inputName[pos] == 'P' || inputName[pos] == 'F' || inputName[pos] == 'V')
            {
                tempCode = 1;
                
                if(!firstChar && tempCode != lastCode)
                {
                    soundCode[codePos] = tempCode + '0'; 
                    codePos ++;
                }
                
                lastCode = tempCode;
            }
            else if(inputName[pos] == 'C' || inputName[pos] == 'S' || inputName[pos] == 'K' || inputName[pos] == 'G' || inputName[pos] == 'J' || inputName[pos] == 'Q' || inputName[pos] == 'X' || inputName[pos] == 'Z')
            {
                tempCode = 2;
                
                if(!firstChar && tempCode != lastCode)
                {
                    soundCode[codePos] = tempCode + '0';
                    codePos ++;
                }
                
                lastCode = tempCode;
            }
            else if(inputName[pos] == 'D' || inputName[pos] == 'T')
            {
                tempCode = 3;
                
                if(!firstChar && tempCode != lastCode)
                {
                    soundCode[codePos] = tempCode + '0';
                    codePos ++;
                }
                
                lastCode = tempCode;
            }
            else if(inputName[pos] == 'L')
            {
                tempCode = 4;
                
                if(!firstChar && tempCode != lastCode)
                {
                    soundCode[codePos] = tempCode + '0';
                    codePos ++;
                }
                
                lastCode = tempCode;
            }
            else if(inputName[pos] == 'M' || inputName[pos] == 'N')
            {
                tempCode = 5;
                
                if(!firstChar && tempCode != lastCode)
                {
                    soundCode[codePos] = tempCode + '0';
                    codePos ++;
                }
                
                lastCode = tempCode;
            }
            else if(inputName[pos] == 'R')
            {
                tempCode = 6;
                
                if(!firstChar && tempCode != lastCode)
                {
                    soundCode[codePos] = tempCode + '0';
                    codePos ++;
                }
                
                lastCode = tempCode;
            }
            
            firstChar = 0;
            
            if(codePos > 3)
            {
                break;
            }
        }
        
        soundCode[4] = '\0';
        
        printf("         %-25s%s\n",inputName,soundCode);
    }
    
    printf("                    END OF OUTPUT\n");
    
    return 0;
}
    

