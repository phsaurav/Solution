#include<stdio.h>

int main()
{
	int l,h,r,flag = 0,i = 0,tempr = 0,j,temph = 0;
	int lstl = 0,lsth = 0,lstr = 0;
	int p[5000];
	int hi[5000];

	while (scanf("%d %d %d", &l, &h, &r) == 3)
	{
		if(l > tempr)// distance left
		{
			if (flag)
			{
				
				hi[i]= 0;
				p[i]= lstr;
				i++;
			}

			hi[i]= h;
			p[i]= l;
			i++;			
		}
		else// inside
		{
			if (h > lsth)
			{
				hi[i]= h;
				p[i]= l;
				i++;
			}
			if (h > temph && r < lstr)
			{
				hi[i]= temph;
				h = temph;
				p[i]= r;
				i++;
			}
			if (h < lsth)
			{
				hi[i]= h;
				p[i]= lstr;
				i++;
			}
		}
		flag = 1;

		if(r > lstr)
		{
			tempr = r;
			temph = h;
		}
		lstl = l;
		lsth = h;
		lstr = r;

		

	}

	for(j = 0; j < i; j++)
		printf("%d %d ",p[j],hi[j]);
	printf("%d 0",tempr);
	
	return 0;
}