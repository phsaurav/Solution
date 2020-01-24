#include <stdio.h>

int main()
{
	int t,n,i,j,k,temp,rs;
	int p[21];

	scanf("%d",&t);

	for (k = 0; k < t; k++)
	{
		scanf("%d",&n);

		for (j = 0; j < n; j++)
		{
			scanf("%d",&p[j]);
		}

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n - 1 - i; j++)
			{
				if (p[j] > p[j + 1])
				{
					temp = p[j];
					p[j] = p[j+1];
					p[j+1] = temp;
				}
			}
		}

		rs = (p[n-1] - p[0]) * 2;

		printf("%d\n",rs);
	}
	return 0;
}
