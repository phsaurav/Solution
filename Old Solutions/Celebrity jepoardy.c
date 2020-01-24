#include <stdio.h>

int main()
{
	char line[1000];

	while (scanf(" %[^\n]", line) != EOF)
	{
		printf("%s\n",line);
	}

	return 0;
}
