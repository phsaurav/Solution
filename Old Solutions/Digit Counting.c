#include <stdio.h>

int main()
{
	int t,n,i,j,k,mod;

	scanf("%d",&t);

	for(i=0; i < t; i++)
	{
		scanf("%d",&n);

		int num[10] = {0};

		for (j = 1; j <= n; j++)
		{
			k = j;
			
			while (k != 0)
			{
				mod = k%10;
				num[mod]++;
				k = k/10;
			}
		}

		printf("%d %d %d %d %d %d %d %d %d %d\n",num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8],num[9]);
	}
	return 0;
}

