#include <stdio.h>

int main()
{
	int t,n,m,i,temp,num;
	long long int tot;

	scanf("%d",&t);

	for (i = 0; i < t; i++)
	{
		scanf("%d %d",&n,&m);

		if (n % 3 != 0)
		{
			temp = n/3;
			n = temp *3;
		}

		if (m % 3 != 0)
		{
			temp = m/3;
			m = temp *3;
		}

		tot = n * m;

		num = tot/9;

		printf("%d\n",num);
	}
	return 0;
}
