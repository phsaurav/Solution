#include <iostream>

using namespace std;

int main()
{
    int n, k, in, limit, totStudent = 0, totTeam = 0;

    cin >> n >> k;

    limit = 5 - k;

    for (int i = 0; i < n; i++)
    {
        cin >> in;

        if (in <= limit)
            totStudent++;
    }

    totTeam = totStudent / 3;

    cout << totTeam << endl;

    return 0;
}