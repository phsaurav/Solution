#include <stdio.h>
#include <string.h>

int main()
{
    char inputLine[101], tempChar[101];
    int groupNum, pos, stringLen, tempPos, lastPos, revPos,groupLen,flag;

    while (scanf("%d", &groupNum))
    {
        tempPos = 0;
        lastPos = 0;
        flag = 1;
        if (groupNum == 0)
            break;

        scanf("%s",inputLine);

        stringLen = strlen(inputLine);

        groupLen = stringLen/groupNum;

        for (pos = 0; pos < stringLen; pos++, tempPos++)
        {
            tempChar[tempPos] = inputLine[pos];

            if ((pos + 1) % groupLen == 0)
            {
                flag = 0;

                for (tempPos = lastPos,revPos = (groupLen - 1); tempPos <= pos; tempPos++, revPos--)
                {
                    inputLine[tempPos] = tempChar[revPos];
                }

                lastPos = pos + 1;
                tempPos = -1;
            }
        }

        if (flag)
            {
                for (tempPos = lastPos,revPos = (groupLen - 2); tempPos < pos; tempPos++, revPos--)
                {
                    inputLine[tempPos] = tempChar[revPos];
                }
            }

        inputLine[pos] = '\0';

        puts(inputLine);
    }
    return 0;
}
