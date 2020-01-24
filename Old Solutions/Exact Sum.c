#include <stdio.h>

int main()
{
	int n,tot,i,d,a,b,j,e;
	int p[10001];

	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i < n; i++)
		{
			scanf("%d",&p[i]);
		}

		scanf("%d",&tot);

		for (d = tot / 2; d > 0; d--)
		{
			for (i = 0; i < n; i++)
			{
				if(d == p[i])
				{
					for (j = 0,e = (tot - d); j < n; j++)
					{
						if(e == p[j])
						{
							printf("Peter should buy books whose prices are %d and %d.\n\n",d,e);
							i = n;
							d = 0;
							break;
						}
						
					}

				}

			}
		}
	}
	return 0;
}
