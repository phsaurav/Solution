#include <stdio.h>
#include <string.h>

int main()
{
    char inCode[10000];
    int testCase,stringLen;

    scanf("%d",&testCase);
    getchar();

    for(int test = 0; test < testCase; test++)
    {
        scanf("%s",inCode);
        stringLen = strlen(inCode);

        if(((inCode[0] == '1' || inCode[0] == '4') && inCode[1] == '\0')||(inCode[0] == '7' && inCode[1] == '8' && inCode[2] == '\0'))
        {
            printf("+\n");
        }
        else if(inCode[stringLen -1] == '5' && inCode[stringLen -2] == '3')
        {
            printf("-\n");
        }
        else if((inCode[0] == '9' && inCode[stringLen-1] == '4') || (inCode[0] == '9' && inCode[1] == '\0'))
        {
            printf("*\n");
        }
        else
        printf("?\n");
        
    }
    return 0;
}