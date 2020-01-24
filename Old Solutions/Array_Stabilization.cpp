#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, in[100001],i;
    int min, max, subMax,flag = 0,subMin,flag2 = 0,res;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &in[i]);

        if(i == 0)
        {
            min = in[i];
            max = in[i];
        }

        if(min > in[i])
        {
            min = in[i];
        }
        else if( max < in[i])
        {
            max = in[i];
        }
    }

    subMax = min;
    subMin = max;

    for(i = 0; i < n; i++)
    {
        if(!flag && in[i] == max)
        {
            flag = 1;
            continue;
        }

        if(!flag2 && in[i] == min)
        {
            flag2 = 1;
            continue;
        }

        if(in[i] > subMax)
        {
            subMax = in[i];
        }

        if(in[i] < subMin)
        {
            subMin = in[i];
        }


    }

    res = ((subMax - min) < (max - subMin))? subMax - min : max - subMin;
    printf("%d\n",res);

    return 0;
}