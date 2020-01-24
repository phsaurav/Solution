#include<stdio.h>
#include<string.h>

int main()
{
	int t,a,i;
	long long int tot = 0;
	char s[7];

	scanf("%d",&t);

	for (i = 0; i < t; i++)
	{
		scanf("%s",s);
		
		if (!strcmp(s, "donate"))
		{
			scanf("%d",&a);
			tot += a;
		}
		else
			printf("%lld\n",tot);

	}
	return 0;
}