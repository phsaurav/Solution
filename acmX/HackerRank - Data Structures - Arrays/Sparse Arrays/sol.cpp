#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int n,q,temp = 0;

    cin >> n;

    vector<string> inS(n);

    for(int i = 0; i < n ; i++)
    {
        cin >> inS[i];
    }

    cin >> q;

    vector<string> qrS(q);

    for (int i = 0; i < q; i++)
    {
        cin >> qrS[i];
    }

    for(int i = 0; i < q; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(qrS[i].compare(inS[j]) == 0)
            temp++;
        }

        cout << temp << endl;
        temp = 0;
    }

    return 0;
}