#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    char c;
    int i,r,oldr;
    static int a[26];
    srand(time(NULL));

    for(i = 0; i < 1000000; i++)
    {
        start:
        do{
            r = rand()%26;

        }while(oldr == r);

        if(a[r] < 39999)
        {
            a[r] = a[r]+1;
        }
        else
        {
            goto start;
        }

        c = ('a' + r);
        oldr = r;
        putchar(c);
    }

    return 0;
}
