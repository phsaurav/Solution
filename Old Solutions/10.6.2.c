#include <stdio.h>

int main()
{
	int T,i;
	double w,r,ga,l,ra,pi = 3.141592654;

	scanf("%d",&T);

	for(i = 0; i< T; i++)
	{
		scanf("%lf",&l);

		w = l * 0.6;
		r = l / 5;

		ra = (pi *(r*r));
		ga = (l * w) - ra;

		printf("%.2lf %.2lf\n",ra,ga);

	}
	return 0;
}

