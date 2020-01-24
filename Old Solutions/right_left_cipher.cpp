#include <bits/stdc++.h>

using namespace std;

int main()
{
    char in[51],root,flag = 0;
    int len, i;

    cin >> in;

    len = strlen(in);

    if(len % 2 == 0)
    {
        root = len / 2 -1;
        flag = 1;
    }
    else
    {
        root = len / 2;
    }

    cout << in[root];

    for(i = 1; i <= root; i++)
    {
        cout << in[root + i];
        cout << in[root - i];
    }

    if(flag)
    {
        cout << in[root + i];
    }
    cout << endl;
    return 0;
}