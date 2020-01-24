#include <stdio.h>
#include <string.h>

int main()
{
	long long int i,r;
	int tot,j,end;
	char bin[50];

	scanf("%lld",&i);

	while (i != 0)
	{
		tot = 0;
		j = 0;

		while (i > 0)
		{
			r = (i % 2);
			bin[j] = '0' + r;
			tot += r;			
			i = i/2;
			j++;
		}
		
		bin[j] = '\0';

		printf("The parity of ");

		for(end = strlen(bin) - 1; end >= 0; end-- )
			printf("%c",bin[end]);

		printf(" is %d (mod 2).\n",tot);

		scanf("%lld",&i);
	}
	return 0;
}
