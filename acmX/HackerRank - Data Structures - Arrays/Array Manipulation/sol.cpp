#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int n, m, i, a, b, k, pos, j;
    long long int max = 0;

    cin >> n >> m;

    vector<vector<long long int>> index(m + 1, vector<long long int>(n, 0));

    for (i = 1; i < m + 1; i++)
    {
        cin >> a >> b >> k;

        for (j = 0; j < n; j++)
        {
            if (j >= a - 1 && j < b)
            {
                index[i][j] = index[i - 1][j] + k;
                max = (index[i][j] > max) ? index[i][j] : max;
            }
            else
            {
                index[i][j] = index[i - 1][j];
            }
        }
    }

    cout << max << endl;
    return 0;
}