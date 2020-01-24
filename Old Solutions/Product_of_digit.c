#include <stdio.h>

int main()
{
    int test;
    int n, flag, last, j;
    char output[1000];

    scanf("%d", &test);

    while (test--)
    {
        scanf("%d", &n);
        flag = 1;
        j = 0;

        if (n < 10)
        {
            printf("%d\n", n);
            continue;
        }

        while (n >= 10 && flag)
        {
            last = n;
            for (int i = 9; i > 1; i--)
            {
                if (n % i == 0)
                {
                    output[j++] = (i + '0');
                    n = n / i;
                    break;
                }
            }
            if (last == n)
            {
                flag = 0;
            }
        }

        if(flag)
        {
            printf("%d",n);

            for( j--; j >= 0; j--)
            {
                printf("%c",output[j]);
            }
            printf("\n");
        }
        else
        printf("-1\n");
    }
    return 0;
}
