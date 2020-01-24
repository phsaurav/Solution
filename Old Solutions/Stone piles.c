#include <stdio.h>
#include <math.h>

int main()
{
	int N, i;
	double R,sum,add;
	double a[110][2];

	scanf("%d %lf", N, R);

	for (i = 0; i < N; i++)
	{
		scanf("%lf %lf", a[i][0], a[i][1]);

	}

	for (i = 1; i <= N; i++)
	{
		if (i == N)
		{
			sum += sqrt(pow((a[0][0] - a[i][0]), 2) + pow((a[0][1] - a[i][1]), 2));
		}
		else
		{
			sum += sqrt(pow((a[i][0] - a[i - 1][0]), 2) + pow((a[i][1] - a[i - 1][1]), 2));
		}
		
	}

	add = 2 * 3.141592654*R;

	sum += add;

	printf("%.2lf", &sum);
	return 0;
}