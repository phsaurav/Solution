#include <stdio.h>
#include <string.h>

int main()
{
    char input[2000], temp[2000];
    int stringLen, i, j,one = 0,zero = 0,flag = 1;

    scanf("%s",input);

    stringLen = strlen(input);

    for(i = 0,j = 0; i < stringLen; i++)
    {
        if(input[i] == '1')
        {
            one++;
            continue;
        }
        if(flag)
        {
            if(input[i] == '0')
            zero++;
            else
            {
                flag = 0;
                temp[j++] = input[i];
            }
        }
        else
        temp[j++] = input[i];
        
    }
    temp[j] = '\0';

    
    for(i = 0; i < zero; i++)
    printf("0");
    for(i = 0; i < one; i++)
    printf("1");

    printf("%s\n",temp);

    return 0;
}