#include <stdio.h>
#include <string.h>
#include <ctype.h>

int converter(char name[])
{
    int stringLen = strlen(name);
    int total = 0,rem = 0;

    for(int pos = 0; pos < stringLen ;  pos++)
    {
        if(isupper(name[pos]))
        {
            total += name[pos] - 'A' + 1;
        }
        else if(islower(name[pos]))
        {
            total += name[pos] - 'a' + 1;
        }
    }

    while((total/10) > 0)
    {
        rem += total%10;
        total /= 10;
    }

    rem += total;

    if((rem/10) > 0)
    {
        total = rem/10;
        rem = rem%10;
        rem += total;
    }

    return rem;
}

int main()
{
    char name1[26],name2[26];
    double value1, value2,ratio;

    while(gets(name1) != NULL)
    {
        gets(name2);
        value1 = converter(name1);
        value2 = converter(name2);

        ratio = (value1 > value2)? value2/value1: value1/value2;

        ratio *= 100;

        printf("%.2lf %%\n",ratio);
    }
    return 0;
}