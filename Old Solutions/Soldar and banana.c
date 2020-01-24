#include <stdio.h>

int main()
{

    int k, w,i;
    long long int n,total = 0,diff;

    scanf("%d %lld %d",&k,&n,&w);

    for(i = 1; i<= w; i++)
    {
        total += i * k;
    }
    diff = total - n;

    if(diff>0)
        printf("%lld\n",diff);
    else
        printf("0\n");
	return 0;
}
