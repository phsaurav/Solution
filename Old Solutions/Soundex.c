#include <stdio.h>
#include <string.h>

int main()
{
    char inputLine[21];
    int stringLen, pos, lastCode, codePos, tempCode;

    while (scanf("%s", inputLine) != EOF)
    {
        stringLen = strlen(inputLine);
        codePos = 0;
        char soundCode[21] = {0};
        lastCode = 0;
        tempCode = 0;

        for (pos = 0; pos < stringLen; pos++)
        {
            if (inputLine[pos] == 'A' || inputLine[pos] == 'E' || inputLine[pos] == 'I' || inputLine[pos] == 'O' || inputLine[pos] == 'U' || inputLine[pos] == 'Y' || inputLine[pos] == 'W' || inputLine[pos] == 'H')
            {
                lastCode = -1;
            }
            else if (inputLine[pos] == 'B' || inputLine[pos] == 'P' || inputLine[pos] == 'F' || inputLine[pos] == 'V')
            {
                tempCode = 1;

                if (tempCode != lastCode)
                {
                    soundCode[codePos] = tempCode + '0';
                    codePos++;
                }
                lastCode = tempCode;
            }
            else if (inputLine[pos] == 'C' || inputLine[pos] == 'S' || inputLine[pos] == 'K' || inputLine[pos] == 'G' || inputLine[pos] == 'J' || inputLine[pos] == 'Q' || inputLine[pos] == 'X' || inputLine[pos] == 'Z')
            {
                tempCode = 2;

                if (tempCode != lastCode)
                {
                    soundCode[codePos] = tempCode + '0';
                    codePos++;
                }

                lastCode = tempCode;
            }
            else if (inputLine[pos] == 'D' || inputLine[pos] == 'T')
            {
                tempCode = 3;

                if (tempCode != lastCode)
                {
                    soundCode[codePos] = tempCode + '0';
                    codePos++;
                }

                lastCode = tempCode;
            }
            else if (inputLine[pos] == 'L')
            {
                tempCode = 4;

                if (tempCode != lastCode)
                {
                    soundCode[codePos] = tempCode + '0';
                    codePos++;
                }

                lastCode = tempCode;
            }
            else if (inputLine[pos] == 'M' || inputLine[pos] == 'N')
            {
                tempCode = 5;

                if (tempCode != lastCode)
                {
                    soundCode[codePos] = tempCode + '0';
                    codePos++;
                }

                lastCode = tempCode;
            }
            else if (inputLine[pos] == 'R')
            {
                tempCode = 6;

                if (tempCode != lastCode)
                {
                    soundCode[codePos] = tempCode + '0';
                    codePos++;
                }

                lastCode = tempCode;
            }
        }
        soundCode[codePos] = '\0';

        printf("%s\n",soundCode);

    }

    return 0;
}
