#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n, in, max=0;
    stack<int> wall;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        max = (max < in) ? in : max;

        if (wall.empty())
        {
            wall.push(in);
        }
        else
        {
            if (in == wall.top())
                wall.pop();
            else if (in > wall.top())
            {
                cout << "NO" << endl;
                return 0;
            }
            else
                wall.push(in);
        }
    }

    if (wall.size() > 1)
        cout << "NO" << endl;
    else if (!wall.empty() && wall.top() != max)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}