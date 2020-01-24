#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char inputLine[31];
    int pos, tempNum, lineLen;

    while (scanf("%s",inputLine) != EOF)
    {
        lineLen = strlen(inputLine);

        for (pos = 0; pos < lineLen; pos++)
        {
            if(isalpha(inputLine[pos]))
            {
                if(inputLine[pos] == 'A' || inputLine[pos] == 'B' || inputLine[pos] == 'C')
                {
                    tempNum = 2;
                    inputLine[pos] = tempNum + '0';
                }
                else if(inputLine[pos] == 'D' || inputLine[pos] == 'E' || inputLine[pos] == 'F')
                {
                    tempNum = 3;
                    inputLine[pos] = tempNum + '0';
                }
                else if(inputLine[pos] == 'G' || inputLine[pos] == 'H' || inputLine[pos] == 'I')
                {
                    tempNum = 4;
                    inputLine[pos] = tempNum + '0';
                }
                else if(inputLine[pos] == 'J' || inputLine[pos] == 'K' || inputLine[pos] == 'L')
                {
                    tempNum = 5;
                    inputLine[pos] = tempNum + '0';
                }
                else if(inputLine[pos] == 'M' || inputLine[pos] == 'N' || inputLine[pos] == 'O')
                {
                    tempNum = 6;
                    inputLine[pos] = tempNum + '0';
                }
                else if(inputLine[pos] == 'P' || inputLine[pos] == 'Q' || inputLine[pos] == 'R' || inputLine[pos] == 'S')
                {
                    tempNum = 7;
                    inputLine[pos] = tempNum + '0';
                }
                else if(inputLine[pos] == 'T' || inputLine[pos] == 'U' || inputLine[pos] == 'V')
                {
                    tempNum = 8;
                    inputLine[pos] = tempNum + '0';
                }
                else if(inputLine[pos] == 'W' || inputLine[pos] == 'X' || inputLine[pos] == 'Y' || inputLine[pos] == 'Z')
                {
                    tempNum = 9;
                    inputLine[pos] = tempNum + '0';
                }
            }
        }

        puts(inputLine);

    }

    return 0;
}