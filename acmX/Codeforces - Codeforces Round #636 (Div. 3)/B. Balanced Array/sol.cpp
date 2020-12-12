#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define vi vector<int>
#define vll vector<ll>
#define pll pair<ll, ll>
#define pii pair<int, int>
#define all(p) p.begin(), p.end()
#define mid(s, e) (s + (e - s) / 2)
#define ull unsigned long long
#define bug(x) cout << "  [ " #x << " = " << x << " ]" << endl

using namespace std;

int main()
{
    int t, n, i;
    ll temp, old = 1, tot;
    vi list;

    cin >> t;

    while(t--)
    {
        cin >> n;
        list.clear();
        temp = 2;
        tot = 0;

        for(i = 0; i < n/2 ; i++)
        {
            tot += temp;
            //bug(temp);
            list.push_back(temp);
            temp += 2;
        }
        for(i = 0, temp = 1; i < (n/2)-1; temp += 2, i++)
        {
            list.push_back(temp);

            tot -= temp;
        }

        if(tot%2 == 1)
        {
            cout << "YES" << endl;
            for(i = 0; i < list.size(); i++)
                cout << list[i] << " ";
            cout << tot << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}