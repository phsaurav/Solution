#include<iostream>

using namespace std;

int main()
{
    int nfriend, bottle, mili, lime, slice, salt, toast, npsalt;
    int totMili, totSlice, res1, res2, res;

    cin >> nfriend >> bottle >> mili >> lime >> slice >> salt >> toast >> npsalt;

    totMili = bottle * mili;
    totSlice = lime * slice;

    res1 = totMili/toast;
    res2 = salt/npsalt;

    res1 = (res1 < res2)? res1 : res2;
    res = (res1 < totSlice)? res1 : totSlice;

    res /= nfriend;

    cout << res << endl;
    
    return 0;
}