#include <stdio.h>
#include <string.h>

int main()
{
	int flag,b4,b100,b400,b15,b55,i,d,leap,first = 0;
	char y[1000000];

	while (scanf("%s", y) != EOF)
	{
		flag = 0;
		b4 = b100 = b400 = b15 = b55 = leap = 0;

		if(first)
			printf("\n");
		first = 1;
		d = strlen(y);

		for (i = 0; i < d; i++)
		{
			b4 = ((b4 * 10) + (y[i] - '0')) % 4;
			b100 = ((b100 * 10) + (y[i] - '0')) % 100;
			b400 = ((b400 * 10) + (y[i] - '0')) % 400;
			b15 = ((b15 * 10) + (y[i] - '0')) % 15;
			b55 = ((b55 * 10) + (y[i] - '0')) % 55;
		}

		if ((b4 == 0 && b100 != 0) || b400 == 0)
		{
			printf("This is leap year.\n");
			flag = 1;
			leap = 1;
		}

		if (b15 == 0)
		{
			printf("This is huluculu festival year.\n");
			flag =1;
		}

		if (leap == 1 && b55 == 0)
		{
			printf("This is bulukulu festival year.\n");
			flag = 1;
		}

		if(flag == 0)
			printf("This is an ordinary year.\n");

	}
	return 0;
}