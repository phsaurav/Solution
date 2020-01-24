#include <stdio.h>
#include <string.h>

int main()
{
    char inputWord[21];
    char letter[22] = {"AEHIJLMOSTUVWXYZ12358"};
    char mirror[22] = {"A3HILJMO2TUVWXY51SEZ8"};
    char shortMirror[9] = {"E3JLS25Z"};
    int stringLen, halfLen, palin, mir, oneTime, check;

    while (scanf("%s", inputWord) != EOF)
    {
        palin = 0;
        mir = 0;
        oneTime = 0;

        stringLen = strlen(inputWord);
        halfLen = stringLen / 2;

        for (int pos = 0, last = stringLen - 1; pos < halfLen; pos++, last--)
        {
            if (inputWord[pos] != inputWord[last])
            {
                palin = 1;
            }
            oneTime = 0;
            for (check = 0; check < 21; check++)
            {
                if (inputWord[pos] == letter[check])
                {
                    if (inputWord[last] != mirror[check])
                    {
                        mir = 1;
                    }
                    oneTime = 1;
                    break;
                }
            }
            if (oneTime == 0)
            {
                mir = 1;
                break;
            }
        }

        if (stringLen == 1)
        {
            for (check = 0; check < 8; check++)
            {
                if (inputWord[0] == shortMirror[check])
                {
                    mir = 1;
                    break;
                }
            }

            if (mir == 0)
            {
                for (check = 0; check < 21; check++)
                {
                    if (inputWord[0] == letter[check])
                    {
                        mir = 0;
                        break;
                    }
                    mir = 1;
                }
            }
        }

        if (stringLen % 2 != 0 && mir == 0)
        {
            for (check = 0; check < 8; check++)
            {
                if (inputWord[halfLen] == shortMirror[check])
                {
                    mir = 1;
                    break;
                }
            }

            if (mir == 0)
            {
                for (check = 0; check < 21; check++)
                {
                    if (inputWord[halfLen] == letter[check])
                    {
                        mir = 0;
                        break;
                    }
                    mir = 1;
                }
            }
        }

        if (palin == 0 && mir == 0)
            printf("%s -- is a mirrored palindrome.\n", inputWord);
        else if (palin == 0 && mir == 1)
            printf("%s -- is a regular palindrome.\n", inputWord);
        else if (palin == 1 && mir == 0)
            printf("%s -- is a mirrored string.\n", inputWord);
        else
            printf("%s -- is not a palindrome.\n", inputWord);
        printf("\n");
    }
    return 0;
}