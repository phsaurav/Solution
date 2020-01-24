#include <stdio.h>


int main()
{
	int n, t, i,j;
	char a[51];

	scanf("%d %d ", &n, &t);
	
	gets(a);

	for (i = 0; i < t; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[j] == 'G' && a[j - 1] == 'B')
			{
				a[j] = 'B';
				a[j - 1] = 'G';
				j++;
			}
		}
	}

	printf("%s\n", a);
	return 0;
}