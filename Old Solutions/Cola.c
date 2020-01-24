#include <stdio.h>

int main()
{
	int tot,N,d;
	while (scanf("%d", &N) != EOF)
	{
		tot = N;

		while (N >= 3)
		{
			d = N/3;
			tot += d;
			N = d + (N%3);
		}

		if(n == 2)
			tot++;
		printf("%d\n",tot);
	}
	return 0;
}

