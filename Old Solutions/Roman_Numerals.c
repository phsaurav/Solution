#include <stdio.h>
#include <ctype.h>
#include <string.h>

int stringToInt(char speed[]);

int main()
{
    char n[4001];
    int pos,printNum;
    int romanValue[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    char romanNum[13][3] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    long long intN;

    while(scanf("%s",n) != EOF)
    {
        if(isdigit(n[0]))
        {
            intN = stringToInt(n);

            for(pos = 12; pos >= 0; pos--)
            {
                printNum = intN / romanValue[pos];
                for(; printNum > 0; printNum--)
                {
                    printf("%s",&romanNum[pos]);
                    intN %= romanValue[pos];
                }
                
            }
            printf("\n");
        }
        else
        {
            int stringLen = strlen(n);
            intN = 0;

            for(pos = stringLen - 1; pos >= 0; pos--)
            {
                if(n[pos] == 'I')// I
                {
                    intN += 1;
                }
                else if(n[pos] == 'V')
                {
                    if(n[pos - 1] == 'I')// IV
                    {
                        intN += 4;
                        pos--;
                    }
                    else// V
                    {
                        intN += 5;
                    }
                }
                else if(n[pos] == 'X')
                {
                    if(n[pos - 1] == 'I')// IX
                    {
                        intN += 9;
                        pos--;
                    }
                    else// X
                    {
                        intN += 10;
                    }
                }
                else if(n[pos] == 'L')
                {
                    if(n[pos - 1] == 'X')// XL
                    {
                        intN += 40;
                        pos--;
                    }
                    else// L
                    {
                        intN += 50;
                    }
                }
                else if(n[pos] == 'C')
                {
                    if(n[pos - 1] == 'X')// XC
                    {
                        intN += 90;
                        pos--;
                    }
                    else// C
                    {
                        intN += 100;
                    }
                }
                else if(n[pos] == 'D')
                {
                    if(n[pos - 1] == 'C')// CD
                    {
                        intN += 400;
                        pos--;
                    }
                    else// D
                    {
                        intN += 500;
                    }
                }
                else if(n[pos] == 'M')
                {
                    if(n[pos - 1] == 'C')// CM
                    {
                        intN += 900;
                        pos--;
                    }
                    else// M
                    {
                        intN += 1000;
                    }
                }
            }

            printf("%lld\n",intN);

        }
    }
    return 0;
}

int stringToInt(char speed[])
{
    int total = 0, stringLen;

    stringLen = strlen(speed);

    for(int count = 0; count < stringLen; count++)
    {
        int lastNum = total;
        total = (lastNum * 10) + (speed[count] - '0');
    }

    return total;
}