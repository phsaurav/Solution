#include <stdio.h>

int main()
{
    int n, k, i, j;
    double a[5010] = {0}, max = 0, avg;

    scanf("%d %d", &n, &k);

    for (i = 1; i <= n; i++)
    {
        scanf("%lf", &a[i]);
        a[i] = a[i] + a[i - 1];
    }

    max = 1.0 * a[i-1] / n;

    for (i = k; i <= n; i++)
    {

        for (j = i; j <= n; j++)
        {
            avg = (a[j] - a[j-i]) * 1.0 / i;
            max = (avg > max) ? avg : max;
        }
    }

    printf("%.15lf", max);

    return 0;
}