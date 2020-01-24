#include <stdio.h>
#include <string.h>

int main()
{
	int n,i,m,p,d,j,k,r,t,ntfirst = 0;
	char name[11][13];
	char temp[13];
	char giftp[10][13];

	while (scanf("%d", &n) != EOF)
	{
		if(ntfirst)
			printf("\n");
		ntfirst =1;

		int tot[11] = {0};
		int gt[11] = {0};
		int gv[11] = {0};

		for (i = 0; i < n; i++)
		{
			scanf("%s",name[i]);
		}
		
		for (i = 0; i < n; i++)
		{
			scanf("%s",temp);
			for (j = 0; j < n; j++)
			{
				if(!strcmp(temp, name[j]))
					t = j;
			}
			scanf("%d %d",&m,&p);
			for (j = 0; j < p; j++)
			{
				scanf(" %s",giftp[j]);
			}
			if(p>0)
			{
			r = m%p;
			gv[t] += m - r;

			d = m/p;
			}

			for (j = 0; j < p; j++)
			{
				for (k = 0; k < n; k++)
				{
					if (!strcmp(giftp[j], name[k]))
					{
						gt[k] += d;
					}
				}
			}

		
		}
		for (i = 0; i < n; i++)
		{
			tot[i] = gt[i] - gv[i];
			printf("%s %d\n",name[i],tot[i]);

		}

	}	
	return 0;
}