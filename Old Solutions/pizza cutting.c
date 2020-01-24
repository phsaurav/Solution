#include <stdio.h>

int main()
{
    long long int N;
    long long int piece;

     scanf("%lld",&N);

  while(N >= 0)
  {
     piece = 1 + ((N * (N+1))/2);
     printf("%lld\n",piece);
     scanf("%lld",&N);
}
    return 0;
}

