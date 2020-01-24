#include <stdio.h>

int main()
{
    int a, b, x, n, i, last = 0;

    scanf("%d %d %d", &a, &b, &x);

    n = a + b;

    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (b >= a)
            {
                printf("1");
                last = 1;
                b--;
            }
            else
            {
                printf("0");
                last = 0;
                a--;
            }

        }
        else
        {
            if (x > 1)
            {
                if (last == 1)
                {
                    printf("0");
                    last = 0;
                    a--;
                    x--;
                }
                else
                {
                    printf("1");
                    last = 1;
                    x--;
                    b--;
                }
            }
            else
            {
                if (b > 0 && (a <= 0 || last == 1))
                {
                    printf("1");
                    b--;
                }
                else
                {
                    printf("0");
                    a--;
                }
            }
        }
    }
    printf("\n");
    return 0;
}