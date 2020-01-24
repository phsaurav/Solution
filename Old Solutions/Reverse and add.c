#include <stdio.h>

long long int reverse(long long int p);

main()
{
    int N,i,count;
    long long int P,r;

    scanf("%d",&N);

    for(i = 0; i < N; i++)
    {
        count = 0;

        scanf("%lld",&P);
        r = reverse(P);


       do{
            count++;
            P = P+r;
            r = reverse(P);
        }while((P+r) != (2*P));

        printf("%d %lld\n",count,r);
    }
    return 0;
}

long long int reverse(long long int p)
{
    long long int r = 0,temp;

    while( p > 0)
    {
        temp = p % 10;
        r = (r*10)+temp;
        p = p/10;
    }

    return r;
}
