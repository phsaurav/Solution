#include <stdio.h>

int main()
{
    int T,N,i,flag;

    long long A[110];

    scanf("%d",&T);

    for(int test = 0; test < T; test++)
    {
        flag = 0;
        scanf("%d",&N);

        for(i = 0; i < N; i++)
        {
            scanf("%lld",&A[i]);

            if(i > 0)
            {
                if(A[i] - A[i-1] == 1)
                {
                    flag = 1;
                }
            }
        }

        if(flag)
        printf("Case %d: Yes\n",test+1);
        else
        printf("Case %d: No\n",test+1);
    }
    return 0;
}