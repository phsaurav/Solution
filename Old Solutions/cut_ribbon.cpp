#include<iostream>

using namespace std;

int maxp = 0;
int dp[4001];
int n, a, b, c,res = 0;

int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int maxcounter(int in)
{
    if(in < 0)
        return -999999999;

    else if(in == 0)
    {
        return 0;
    }

    else if( dp[in] != -1)
        return dp[in];

    else
        dp[in] = 1 + max(maxcounter(in - a), max(maxcounter(in - b), maxcounter(in - c)));

    return dp[in];
}

int main()
{

    cin >> n >> a >> b >> c;

    for(int i = 0 ; i < 4001; i++)
    {
        dp[i] = -1;
    }

    res = maxcounter(n);

    cout << res << endl;

    return 0;
}