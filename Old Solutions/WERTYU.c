#include <stdio.h>
#include <string.h>

int main()
{
	char line[1000000];
	char k[] = {'`','1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']','\\','A','S','D','F','G','H','J','K','L',';','\'','Z','X','C','V','B','N','M',',','.','/'};
	int i,j,flag = 0;
	

	while (scanf(" %[^\n]",line) != EOF)
	{
		if(flag)
			printf("\n");
		flag = 1;

		int d = 0;

		d = strlen(line);

		for (i = 0; i < d; i++)
		{
			for (j = 0; j < 47; j++)
			{
				if(line[i] == k[13] || line[i] == k[26] || line[i] == k[37] || line[i] == k[0] || line[i] == ' '||line[i] == '\n')
					break;
				if (line[i] == k[j])
				{
					line[i] = k[j-1];
					break;
				}
			}
		}

		printf("%s",line);

	}
	return 0;
}