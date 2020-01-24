#include <stdio.h>

int main()
{
	int n,treat,ntreat,eb,i,count = 0;
	int e[1001];

	scanf("%d",&n);

	while (n != 0)
	{
		count++;
		treat = ntreat = 0;

		for (i = 0; i < n; i++)
		{
			scanf("%d",&e[i]);
			if(e[i] == 0)
				treat++;
			else
				ntreat++;
		}

		eb = ntreat - treat;

		printf("Case %d: %d\n",count,eb);

		scanf("%d",&n);
	}
	return 0;
}
