#include <bits/stdc++.h>

using namespace std;

int main()
{
    char in[501][501];
    int n,tot = 0,i,j;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%s",in[i]);
    }

    for( i = 0; i < n; i++)
    {
        for( j = 0; j < n; j++)
        {
            if(i == 0 || i == n-1 || j == 0 || j == n-1)
            {
                continue;
            }

            if(in[i][j] == 'X')
            {
                if(in[i+1][j+1] == 'X' && in[i - 1][j-1] == 'X' && in[i - 1][j + 1] == 'X' && in[i+1][j-1] == 'X')
                {
                    tot++;
                }

            }

        }
    }

    printf("%d",tot);
    return 0;
}