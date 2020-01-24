#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int input, i, j, k;
    int *prime;
    int limit = 10000001;

    prime = (int *)malloc(sizeof(int) * limit);

    prime[2] = 1;

    for (i = 3; i < limit; i += 2)
    {
        prime[i] = 1;
    }

    for (i = 3; i < 3200; i += 2)
    {
        if (prime[i])
        {
            for (j = i; i * j <= limit; j++)
            {
                prime[i * j] = 0;
            }
        }
    }

    while (scanf("%d", &input) != EOF)
    {
        int count = 0;

        for (i = 2; i <= input; i++)
        {
            if (prime[i])
                count++;
            else
            {
                if (i % 2 == 0)
                {
                    j = i;
                    while (j % 2 == 0)
                    {
                        count++;
                        j = j / 2;
                    }
                    if (j != 0)
                    {
                        if (prime[j])
                            count++;
                        else
                        {
                            k = j;
                            for (int j = 3; j <= sqrt(k); j += 2)
                            {
                                if (prime[j])
                                {
                                    while (k % j == 0)
                                    {
                                        count++;
                                        k = k / j;
                                    }

                                    if (prime[k])
                                    {
                                        count++;
                                        break;
                                    }
                                    
                                }
                            }
                        }
                    }
                }
                else
                {
                    k = i;
                    for (int j = 3; j <= sqrt(k); j += 2)
                    {
                        if (prime[j])
                        {
                            while (k % j == 0)
                            {
                                count++;
                                k = k / j;
                            }

                            if (prime[k])
                            {
                                count++;
                                break;
                            }
                        }
                    }
                }
            }
        }

        printf("%d\n", count);
    }
    return 0;
}