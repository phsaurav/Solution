#include <stdio.h>

int main()
{
	int M,N,cut;

	while (scanf("%d %d", &M, &N) != EOF)
	{
		cut = 0;
		cut = ((M-1)+(M*(N-1)));

		printf("%d\n",cut);

	}
	return 0;
}