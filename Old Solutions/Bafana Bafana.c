#include <stdio.h>

main()
{
    int T,N,K,P;
    int l,i;

    scanf("%d",&T);

    for(i = 0; i < T; i++)
    {
        scanf("%d %d %d",&N,&K,&P);
        if((K+P)%N == 0)
        {
            l = N;
        }
        else{
        l = (K+P)%N;
        }

        printf("Case %d: %d\n",(i+1),l);

    }
    return 0;
}
