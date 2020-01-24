#include <stdio.h>

int main()
{
    int T,N,Q,P,i,j;
    int A[100001];
    int X,Y,temp;

    scanf("%d",&T);

    for(int test = 0; test < T; test++)
    {
        scanf("%d %d",&N,&Q);

        for(i = 0; i < N; i++)
        {
            scanf("%d",&A[i]);
        }

        for(i = 0; i < Q; i++)
        {
            scanf("%d %d %d",&P,&X,&Y);

            if(P == 1)
            {
                for(j = 0; j < N; j++)
                {
                    if(A[j] <= X)
                    {
                        A[j] -= Y;
                    }
                }
            }
            else if(P == 2)
            {
                for(j = 0; j < N; j++)
                {
                    if(A[j] >= X)
                    {
                        A[j] += Y;
                    }
                }
            }
        }

        for(i = 0; i < N; i++)
        {
            printf("%d",A[i]);
            if(i < N-1)
            printf(" ");
        }
        printf("\n");

    }


    return 0;
}