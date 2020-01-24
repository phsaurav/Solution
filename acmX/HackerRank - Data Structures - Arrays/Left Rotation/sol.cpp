#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int n, d, temp, size, place, start;
    vector<int> num;

    cin >> n >> d;

    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        num.push_back(temp);
    }

    size = num.size();
    place = (d % n);

    cout << num[place]<< " ";

    for(int i = place+1;; i++)
    {
        if(i == place)
        break;
        
        if(i == n)
        i = 0;

        cout << num[i] << " ";
        
    }


    return 0;
}