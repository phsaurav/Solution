#include <stdio.h>
#include <string.h>

void converter(char tempChar[]);

int main()
{
    char inputLine[2001], tempChar[7],firstTime = 1;
    int t, test, pos, tempPos, stringLen;

    scanf("%d ", &t);

    for (test = 0; test < t; test++)
    {
        gets(inputLine);

        stringLen = strlen(inputLine);

        if(!firstTime)
        printf("\n");

        firstTime = 0;

        printf("Message #%d\n",(test+1));

        for (tempPos = 0, pos = 0; pos < stringLen; pos++)
        {
            if (inputLine[pos] == ' ')
            {
                if (inputLine[pos - 1] == ' ')
                {
                    printf(" ");
                }
                else
                {
                    tempChar[tempPos] = '\0';
                    converter(tempChar);
                    tempPos = 0;
                }
            }
            else
            {
                tempChar[tempPos] = inputLine[pos];
                tempPos++;
            }
        }
        tempChar[tempPos] = '\0';
        converter(tempChar);
        printf("\n");
    }

    return 0;
}

void converter(char tempchar[])
{
    if (strcmp(tempchar, ".-") == 0)
        printf("A");
    else if (strcmp(tempchar, "-...") == 0)
        printf("B");
    else if (strcmp(tempchar, "-.-.") == 0)
        printf("C");
    else if (strcmp(tempchar, "-..") == 0)
        printf("D");
    else if (strcmp(tempchar, ".") == 0)
        printf("E");
    else if (strcmp(tempchar, "..-.") == 0)
        printf("F");
    else if (strcmp(tempchar, "--.") == 0)
        printf("G");
    else if (strcmp(tempchar, "....") == 0)
        printf("H");
    else if (strcmp(tempchar, "..") == 0)
        printf("I");
    else if (strcmp(tempchar, ".---") == 0)
        printf("J");
    else if (strcmp(tempchar, "-.-") == 0)
        printf("K");
    else if (strcmp(tempchar, ".-..") == 0)
        printf("L");
    else if (strcmp(tempchar, "--") == 0)
        printf("M");
    else if (strcmp(tempchar, "-.") == 0)
        printf("N");
    else if (strcmp(tempchar, "---") == 0)
        printf("O");
    else if (strcmp(tempchar, ".--.") == 0)
        printf("P");
    else if (strcmp(tempchar, "--.-") == 0)
        printf("Q");
    else if (strcmp(tempchar, ".-.") == 0)
        printf("R");
    else if (strcmp(tempchar, "...") == 0)
        printf("S");
    else if (strcmp(tempchar, "-") == 0)
        printf("T");
    else if (strcmp(tempchar, "..-") == 0)
        printf("U");
    else if (strcmp(tempchar, "...-") == 0)
        printf("V");
    else if (strcmp(tempchar, ".--") == 0)
        printf("W");
    else if (strcmp(tempchar, "-..-") == 0)
        printf("X");
    else if (strcmp(tempchar, "-.--") == 0)
        printf("Y");
    else if (strcmp(tempchar, "--..") == 0)
        printf("Z");
    else if (strcmp(tempchar, "-----") == 0)
        printf("0");
    else if (strcmp(tempchar, ".----") == 0)
        printf("1");
    else if (strcmp(tempchar, "..---") == 0)
        printf("2");
    else if (strcmp(tempchar, "...--") == 0)
        printf("3");
    else if (strcmp(tempchar, "....-") == 0)
        printf("4");
    else if (strcmp(tempchar, ".....") == 0)
        printf("5");
    else if (strcmp(tempchar, "-....") == 0)
        printf("6");
    else if (strcmp(tempchar, "--...") == 0)
        printf("7");
    else if (strcmp(tempchar, "---..") == 0)
        printf("8");
    else if (strcmp(tempchar, "----.") == 0)
        printf("9");
    else if (strcmp(tempchar, ".-.-.-") == 0)
        printf(".");
    else if (strcmp(tempchar, "--..--") == 0)
        printf(",");
    else if (strcmp(tempchar, "..--..") == 0)
        printf("?");
    else if (strcmp(tempchar, ".----.") == 0)
        printf("'");
    else if (strcmp(tempchar, "-.-.--") == 0)
        printf("!");
    else if (strcmp(tempchar, "-..-.") == 0)
        printf("/");
    else if (strcmp(tempchar, "-.--.") == 0)
        printf("(");
    else if (strcmp(tempchar, "-.--.-") == 0)
        printf(")");
    else if (strcmp(tempchar, ".-...") == 0)
        printf("&");
    else if (strcmp(tempchar, "---...") == 0)
        printf(":");
    else if (strcmp(tempchar, "-.-.-.") == 0)
        printf(";");
    else if (strcmp(tempchar, "-...-") == 0)
        printf("=");
    else if (strcmp(tempchar, ".-.-.") == 0)
        printf("+");
    else if (strcmp(tempchar, "-....-") == 0)
        printf("-");
    else if (strcmp(tempchar, "..--.-") == 0)
        printf("_");
    else if (strcmp(tempchar, ".-..-.") == 0)
        printf("\"");
    else if (strcmp(tempchar, ".--.-.") == 0)
        printf("@");
}
