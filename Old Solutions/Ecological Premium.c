#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long int sum;
    int i,n,f,j;
    long long int a[21][3];

        while(scanf("%d ",&n) != EOF)
        {
        for(j = 0; j< n; j++)
        {

        scanf("%d",&f);
        sum = 0;
        for(i = 0; i < f; i++)
        {
            scanf("%lld %lld %lld",&a[i][0],&a[i][1],&a[i][2]);
        }

        for(i = 0; i<f;i++)
        {

            sum += a[i][0] * a[i][2];

        }

        printf("%lld\n",sum);
        }
        }
    return 0;
}
