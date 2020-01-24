#include <stdio.h>
#include <string.h>

int main()
{
    int size,inputLen,i;
    char inputNum[20];

    scanf("%d %s",&size,inputNum);

    while(size !=0)
    {
        inputLen = strlen(inputNum);
        for(int line = 0; line < (2*size)+3; line++)
        {
            if(line == 0)//firstLine
            {
                for(int num = 0; num <inputLen; num++)
                {
                    if(num > 0)
                    printf(" ");

                    if(inputNum[num] == '1' || inputNum[num] == '4')
                    {
                        printf(" ");
                        for(i = 0; i < size; i++)
                        printf(" ");

                        printf(" ");
                    }
                    else
                    {
                        printf(" ");
                        for(i = 0; i < size; i++)
                        printf("-");

                        printf(" ");
                    }
                }
            }
            else if(line == (size +1))//midLine
            {
                for(int num = 0; num <inputLen; num++)
                {
                    if(num > 0)
                    printf(" ");

                    if(inputNum[num] == '0' || inputNum[num] == '1' || inputNum[num] == '7')
                    {
                        printf(" ");
                        for(i = 0; i < size; i++)
                        printf(" ");

                        printf(" ");
                    }
                    else
                    {
                        printf(" ");
                        for(i = 0; i < size; i++)
                        printf("-");

                        printf(" ");
                    }
                }
            }
             else if(line == (size *2)+2)//lastLine
            {
                for(int num = 0; num <inputLen; num++)
                {
                    if(num > 0)
                    printf(" ");

                    if(inputNum[num] == '1' || inputNum[num] == '4' || inputNum[num] == '7')
                    {
                        printf(" ");
                        for(i = 0; i < size; i++)
                        printf(" ");

                        printf(" ");
                    }
                    else
                    {
                        printf(" ");
                        for(i = 0; i < size; i++)
                        printf("-");

                        printf(" ");
                    }
                }
                
            }
            else if(line < size + 1)//firstHalf
            {
                for(int num = 0; num <inputLen; num++)
                {
                    if(num > 0)
                    printf(" ");
                    if(inputNum[num] == '0' || inputNum[num] == '4' || inputNum[num] == '8' || inputNum[num] == '9')
                    {
                        printf("|");
                        for(i = 0; i < size; i++)
                        printf(" ");

                        printf("|");
                    }
                    else if( inputNum[num] == '5' || inputNum[num] == '6')
                    {
                        printf("|");
                        for(i = 0; i < size; i++)
                        printf(" ");

                        printf(" ");
                    }
                    else
                    {
                        printf(" ");
                        for(i = 0; i < size; i++)
                        printf(" ");

                        printf("|");
                    }
                }
            }
            else//SecondHalf
            {
                for(int num = 0; num <inputLen; num++)
                {
                    if(num > 0)
                    printf(" ");

                    if(inputNum[num] == '0' || inputNum[num] == '6' || inputNum[num] == '8')
                    {
                        printf("|");
                        for(i = 0; i < size; i++)
                        printf(" ");

                        printf("|");
                    }
                    else if( inputNum[num] == '2')
                    {
                        printf("|");
                        for(i = 0; i < size; i++)
                        printf(" ");

                        printf(" ");
                    }
                    else
                    {
                        printf(" ");
                        for(i = 0; i < size; i++)
                        printf(" ");

                        printf("|");
                    }
                }
            }

            printf("\n");
        }
        printf("\n");
        scanf("%d %s",&size,inputNum);
    }
    return 0;
}