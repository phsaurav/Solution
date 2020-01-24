#include <stdio.h>

int main()
{
	char line[6];
	int count = 0;

	scanf("%s",line);

	while (line[0] != '*')
	{
		count++;

		if(line[0] == 'H' && line[1] == 'a' && line[2] == 'j' && line[3] == 'j')
			printf("Case %d: Hajj-e-Akbar\n",count);
		else
			printf("Case %d: Hajj-e-Asghar\n",count);
			
		scanf("%s",line);
	}

	return 0;
}
