#include <stdio.h>
#include <math.h>

int main()
{
	unsigned long long int N,Q=0;
	int i, out = 0, flag = 0, p[10000], j = 0;

	scanf("%llu", &N);


			if (N < 10)
				flag = 3;
			else
			{
				for (i = 9; i >= 2; i--)
				{
					while (N%i == 0)
					{
						N = N / i;
						p[j] = i;
						j++;
						flag = 1;
					}



				}

				if (N > 10)
				{
					flag = 0;
				}
				for (i = 0; i < j; i++)
				{

					Q += p[i] * pow(10, i);
				}
			}
			if (N == 1)
			{
				flag = 4;
				printf("1\n");
			}




	if (flag == 1)
		printf("%llu\n", Q);
	if (flag == 3)
		printf("%llu\n", N);
	if (flag == 0)
		printf("-1\n");

	return 0;
}
