#include <stdio.h>

int main()
{
	int i,a,b,c,tot,d1,d2,d3;

	scanf("%d %d %d %d",&i,&a,&b,&c);

	while (i != 0 || a != 0 || b != 0 || c != 0)
	{
		d1 = d2 = d3 = 0;

		d1 = (i<a)?(40-(a-i)):(i-a);
		d2 = (a<=b)?(b-a):(40-(a-b));
		d3 = (b<c)?(40-(c-b)):(b-c);

		tot = 1080+(d1*9)+(d2*9)+(d3*9);

		printf("%d\n",tot);

		scanf("%d %d %d %d",&i,&a,&b,&c);
	}
	return 0;
}
