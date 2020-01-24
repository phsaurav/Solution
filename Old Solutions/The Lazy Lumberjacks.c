#include <stdio.h>

int main()
{
	int N,a,b,c,i;

	scanf("%d",&N);

	for(i = 0; i < N; i++)
	{
		scanf("%d %d %d",&a,&b,&c);

		if (a > b)
		{
			if (a > c)
			{
				if(a < (b+c))
					printf("OK\n");
				else
					printf("Wrong!!\n");
			}
			else
			{
				if(c < (b+a))
					printf("OK\n");
				else
					printf("Wrong!!\n");
			}
		}
		else
		{
			if (b > c)
			{
				if(b < (a+c))
					printf("OK\n");
				else
					printf("Wrong!!\n");
			}
			else
			{
				if(c < (b+a))
					printf("OK\n");
				else
					printf("Wrong!!\n");
			}
		}
	}
	return 0;
}
