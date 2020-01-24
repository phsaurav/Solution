#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int s, n, pwr, i, flag = 1,last,j = 0;
    int level[1001][2], temp[2];

    scanf("%d %d", &s, &n);

    pwr = s;

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &temp[0], &temp[1]);
        j = i;
        
        while (i > 0 && temp[0] < level[j-1][0])
        {
            level[j][0] = level[j-1][0];
            level[j][1] = level[j-1][1];
            j--;
        }

        level[j][0] = temp[0];
        level[j][1] = temp[1];

        last = level[i][0];
    }

    for (i = 0; i < n; i++)
    {

        if (pwr > level[i][0])
        {
            pwr += level[i][1];
        }
        else
        {
            flag = 0;
        }
    }

    if (flag)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}