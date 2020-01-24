#include <bits/stdc++.h>

using namespace std;

int arr[6][6];

int calculate(int ival, int jval)
{
    int tot = 0;

    for (int i = ival; i < ival + 3; i++)
    {
        if(i == ival+1)
        {
            tot += arr[i][jval+1];
            continue;
        }
        for (int j = jval; j < jval + 3; j++)
        {
            tot += arr[i][j];
        }
    }

    return tot;
}

int main()
{

    int ret;
    int max = 0;
    int call = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }

    max = calculate(0,0);

    for (int i = 0; i < 4; i++)
    {
         for(int j = 0; j < 4; j++)
         {
             ret = calculate(i,j);
             max = ret > max ? ret : max;
         }
    }

    cout << max << endl;

    return 0;
}