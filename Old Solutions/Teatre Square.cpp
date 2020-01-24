#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int x,y,stoneNeed;
    double n,m,a;

    cin >> n >> m >> a;

    x = ceil(n/a);
    y = ceil(m/a);

    stoneNeed = x * y;
    cout << stoneNeed << endl;

    return 0;
}