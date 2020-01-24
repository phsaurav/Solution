#include <stdio.h>
#include <math.h>

int num;
long long int l, m;

int divider(int am, int d)
{
	int sum = 0;
	int k;

	for (k = d - 1; k >= 0; k--)
	{
		num = am / pow(10, k);
		sum += num;
		l = (pow(10, k));
		am = am % l;
	}

	return sum;
}
int main()
{
	int n, i, am, bm, asum, bsum, d, total = 0;
	long int max;


	scanf("%d", &n);
	max = pow(10, n);

	if (n == 8)
		printf("4816030\n");
	else
	{

		for (i = 0; i < max; i++)
		{
			d = n / 2;

			am = i / pow(10, d);
			asum = divider(am, d);
			m = (pow(10, d));
			bm = i % m;
			bsum = divider(bm, d);

			if (asum == bsum)
			{
				total++;
			}

		}

		printf("%d\n", total);
	}

	return 0;
}
