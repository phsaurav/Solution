#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, n, tot, count;

    cin >> t;

    while(t--)
    {
        cin >> n;
        tot = 3;
        count = 2;

        if(n==1)
        {
            cout << "1" << endl;
            continue;
        }

        while(n%tot != 0)
        {
            count *= 2;
            tot += count;
        }

        cout << n/tot << endl;
    }
    
    return 0;
}