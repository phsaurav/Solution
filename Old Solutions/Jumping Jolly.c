#include <stdio.h>
#include <math.h>

int main()
{
	int n, a[3001],i,j;

	while (scanf("%d", &n) != EOF)
	{
		int flag = 1;
		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);

		}

		for (i = 0; i < (n - 1); i++)
		{
			a[i] = abs(a[i] - a[i + 1]);

		}

		for (i = 1; i < n; i++)
		{
			for (j = 0; j < (n - 1); j++)
			{
				if (a[j] == i)
				{
					flag = 1;
					break;
				}
				else
					flag = 0;
			}
			if (flag == 0)
				break;
		}

		if (flag == 1)
			printf("Jolly\n");
		else
			printf("Not jolly\n");
	}
	return 0;

}