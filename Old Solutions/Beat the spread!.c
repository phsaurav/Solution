#include <stdio.h>

int main()
{
	int n,s,d,i,m;
	int hi,lo;

	scanf("%d",&n);

	for (i = 0; i < n; i++)
	{
		scanf("%d %d",&s,&d);

		m = s - d;

		if (d <= s && (m % 2 == 0))
		{
			hi = s - (m/2);
			lo = s - hi;

			printf("%d %d\n",hi,lo);
		}
		else
			printf("impossible\n");
	}
	return 0;
}