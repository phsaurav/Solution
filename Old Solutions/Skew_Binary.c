#include <stdio.h>
#include <math.h>
#include <string.h>

int main() 
{
    char inputNum[10000];
    int stringLen,power,decimal,pos;
    
    while(scanf("%s",inputNum) != EOF)
    {
        if(inputNum[0] == '0')
            break;
        
        stringLen = strlen(inputNum);
        power = stringLen;
        decimal = 0;
        
        for(pos = 0; pos < stringLen ; pos++,power--)
        {
            decimal += (inputNum[pos] - '0') * (pow(2,power) - 1);
            
        }
        
        printf("%d\n",decimal);
    }
    return 0;
}

