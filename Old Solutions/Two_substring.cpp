#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    int ab = 0, ba = 0, flag = 0;

    cin >> n;

    int maxlen = n.length();

    for (int i = 0; i < maxlen; i++)
    {
        if (n[i] == 'A' && ab == 0 && n[i + 1] == 'B')
        {
            ab = 1;
            i++;
        }
        else if (n[i] == 'B' && ba == 0 && n[i + 1] == 'A')
        {
            ba = 1;
            i++;
        }

        if (ab == 1 && ba == 1)
        {
            cout << "YES" << endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        ab = ba = 0;
        
        for (int i = maxlen; i >= 0; i--)
        {
            if (n[i] == 'A' && ab == 0 && n[i - 1] == 'B')
            {
                ab = 1;
                i--;
            }
            else if (n[i] == 'B' && ba == 0 && n[i - 1] == 'A')
            {
                ba = 1;
                i--;
            }

            if (ab == 1 && ba == 1)
            {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
        cout << "NO" << endl;

    return 0;
}