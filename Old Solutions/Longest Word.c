#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char w[100],l[100];
	int i,count = 0, lastcount = 0;
	scanf("%s",w);

	while(w[0] != 'E' || w[1] != '-' || w[2] != 'N' || w[3] != '-' || w[4] != 'D')
	{
		count = 0;
		for (i = 0; w[i] != '\0'; i++)
		{
			if(isalpha(w[i]) || w[i] == '-')
				count++;
		}

		if (count > lastcount)
		{
			strcpy(l,w);
			lastcount = count;
		}

		scanf("%s",w);
	}

	for (i = 0; i < strlen(l); i++)
	{
		if(isalpha(l[i]) || l[i] == '-')
			putchar(tolower(l[i]));
	}
	printf("\n");

	return 0;
}
