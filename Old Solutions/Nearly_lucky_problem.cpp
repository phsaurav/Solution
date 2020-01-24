#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char input[20];
    int stringLen, totLucky = 0;

    cin >> input;

    stringLen = strlen(input);

    for (int i = 0; i < stringLen; i++)
    {
        if (input[i] == '4' || input[i] == '7')
        {
            totLucky++;
        }
    }

    if (totLucky == 4 || totLucky == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}