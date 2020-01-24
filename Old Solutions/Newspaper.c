#include <stdio.h>
#include <string.h>

int main()
{
    int testCase, pCharNum, value[101], lineNum, test, charNum, line, stringLen, pos;
    char pChar[101], inputLine[10001];
    double total, dollar;

    scanf("%d", &testCase);

    for (test = 0; test < testCase; test++)
    {
        scanf("%d", &pCharNum);

        total = 0;
        dollar = 0;

        for (charNum = 0; charNum < pCharNum; charNum++)
        {
            scanf(" %c %d", &pChar[charNum], &value[charNum]);
        }

        scanf("%d ", &lineNum);
        for (line = 0; line < lineNum; line++)
        {
            gets(inputLine);

            stringLen = strlen(inputLine);

            for (pos = 0; pos < stringLen; pos++)
            {
                for (charNum = 0; charNum < pCharNum; charNum++)
                {
                    if (inputLine[pos] == pChar[charNum])
                    {
                        total += value[charNum];
                        break;
                    }
                }
            }
        }

        dollar = (double)total / 100;

        printf("%.2lf$\n", dollar);
    }
    return 0;
}
