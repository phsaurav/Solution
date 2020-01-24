#include <stdio.h>

int main()
{
    int T, N, c, test, count, first, maxSpeed;
    scanf("%d", &T);

    for (test = 0; test < T; test++)
    {
        first = 1;
        scanf("%d", &N);

        for (count = 0; count < N; count++)
        {
            scanf("%d", &c);

            if (first)
            {
                maxSpeed = c;
                first = 0;
            }
            else
            {
                maxSpeed = (maxSpeed < c) ? c : maxSpeed;
            }
        }

        printf("Case %d: %d\n", test + 1, maxSpeed);
    }

    return 0;
}