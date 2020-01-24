#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{

    int N, Q, temp;
    long long int qr, x, y, res;
    long long int lastAns = 0;

    cin >> N >> Q;
    vector<vector<long long int>> s(N, vector<long long int>());

    for (int i = 0; i < Q; i++)
    {
        cin >> qr >> x >> y;

        res = ((x ^ lastAns) % N);

        if (qr == 1)
        {
            s[res].push_back(y);
        }
        else
        {
            temp = y % s[res].size();
            lastAns = s[res][temp];
            cout << lastAns << endl;
        }
    }

    return 0;
}