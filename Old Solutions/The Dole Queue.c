#include <stdio.h>

int num[21];
int n,x;
void shifting(int pos)
{
	int i,j;
	for(i = 0; i < x; i++)
	{
		if (num[i] == pos)
		{
			for (j = i; j < x - 1; j++)
			{
				num[j] = pos+1;
				pos++;
			}

			break;
		}
	}
	
}

int main()
{	
	int k,m,count,tempcc,tempc,startcc,startc;
	int out[21];

	scanf("%d %d %d",&n,&k,&m);

	while (n != 0 || k != 0 || m != 0)
	{
		startcc = 1;
		startc = n;

		for (int i = 0; i < n; i++)
		{
			num[i] = i+1;
		}
		count = 0;
		while (count < n)
		{
			 x = n;
			tempcc = startcc + (k-1);
			tempc = startc - (m-1);

			tempcc = (tempcc > x)? tempcc -x : tempcc;
			tempc = ( tempc < 1)? tempc + x : tempc;

			if (tempcc <= x)
			{
				out[count] = num[tempcc - 1];
				count++;
			}
			if (tempc <= x && tempc > 0)
			{
				out[count] = num[tempc - 1];
				count++;
			}

			shifting(tempcc);
			shifting(tempc);

			startcc = tempcc+1;
			startc = tempc -1;

			startcc = (startcc > x)? startcc -x : startcc;
			startc = ( startc < 1)? startc + x : startc;
			
		}

		for(int i = 0; i< n; i++)
			printf(" %d ",out[i]);

		scanf("%d %d %d",&n,&k,&m);
	}
	return 0;
}