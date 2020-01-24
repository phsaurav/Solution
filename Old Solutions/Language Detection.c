#include <stdio.h>
#include <string.h>

int main()
{
	char s[14];
	char out[10];
	int count = 0;

	scanf("%s",s);

	while (s[0] != '#' || s[1] != '\0')
	{
		count++;

		if(!strcmp(s,"HELLO"))
			printf("Case %d: ENGLISH\n",count);

		else if(!strcmp(s,"HOLA"))
			printf("Case %d: SPANISH\n",count);

		else if(!strcmp(s,"HALLO"))
			printf("Case %d: GERMAN\n",count);

		else if(!strcmp(s,"BONJOUR"))
			printf("Case %d: FRENCH\n",count);

		else if(!strcmp(s,"CIAO"))
			printf("Case %d: ITALIAN\n",count);

		else if(!strcmp(s,"ZDRAVSTVUJTE"))
			printf("Case %d: RUSSIAN\n",count);
		else
			printf("Case %d: UNKNOWN\n",count);

		scanf("%s",s);
	}

	return 0;
}
