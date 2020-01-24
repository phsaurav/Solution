#include <stdio.h>

int main()
{
    unsigned long long hashmat, opponent,diff;

    while(scanf("%llu %llu",&hashmat,&opponent) != EOF)
    {
        diff = (opponent > hashmat)?(opponent-hashmat):(hashmat-opponent);

        printf("%llu\n",diff);
    }
    return 0;
}

