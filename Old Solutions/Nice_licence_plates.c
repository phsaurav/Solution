#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int stringToInt(char speed[]);

int main()
{
    int N, test, number, diff,text;
    char plateNum[9], numPart[5];

    scanf("%d", &N);

    for (test = 0; test < N; test++)
    {
        scanf("%s", plateNum);

        for (int i = 0; i < 4; i++)
        {
            numPart[i] = plateNum[4 + i];
        }
        numPart[4] = '\0';
        number = stringToInt(numPart);

        text = (((plateNum[0] - 'A') * (26 * 26)) + ((plateNum[1] - 'A') * 26) + (plateNum[2] - 'A'));

        diff = abs(number - text);

        if (diff <= 100)
            printf("nice\n");
        else
            printf("not nice\n");
    }

    return 0;
}

int stringToInt(char speed[])
{
    int total = 0, stringLen;

    stringLen = strlen(speed);

    for (int count = 0; count < stringLen; count++)
    {
        int lastNum = total;
        total = (lastNum * 10) + (speed[count] - '0');
    }

    return total;
}