#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    int l1,r1,l2,r2,out1,out2;

    scanf("%d",&q);

    for(int i = 0; i < q; i++)
    {
        scanf("%d %d %d %d",&l1,&r1,&l2,&r2);

        out1 = r1;
        out2 = r2;

        while(out2 == out1)
        {
            out2--;
        }

        printf("%d %d\n",out1,out2);
    }
    return 0;
}