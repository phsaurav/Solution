#include <stdio.h>

int main()
{

    long long int n,max = 0,a[100001];
    int i,j;
    scanf("%lld",&n);

    while(n != 0)
    {   max = 0;
        for(i = 0; i <= n; i++)
        {
           if(i> 1)
           {
               if(i % 2 == 0)
                a[i] = a[i/2];
               else
                a[i] = (a[i/2]+a[(i/2)+1]);
           }
           else
           a[i] = i;
           if(i > 1)
            max = (a[i]>a[i - 1])?a[i]:max;
        }

        printf("%lld\n",max);
        scanf("%lld",&n);
    }
	return 0;
}
