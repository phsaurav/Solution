#include <stdio.h>
#include <string.h>

int add(int a)
{
	int s = 0;

	while (a / 10 != 0)
	{
		s += a % 10;
		a /= 10;
	}

	s += a % 10;

	return s;
}

int main()
{

	char c[11];
	int sum;
	int i,d;

	while (scanf(" %[^\n]", c) != EOF)
	{
		sum = 0;
		if (c[0] == '0')
			break;
		d = strlen(c);

		for (i = 0; i < d; i++)
		{
			sum += c[i] - '0';

		}

		while (sum >= 10)
		{
			sum = add(sum);
		}

		printf("%d\n", sum);
	}
	return 0;

}

