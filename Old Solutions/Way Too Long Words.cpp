#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int n,stringLen;

    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        getline(cin, input);

        stringLen = input.length();

        if(stringLen > 10)
        {
            cout << input[0] << stringLen - 2 << input[stringLen -1] << endl;
        }
        else
        {
            cout << input << endl;
        }
    }

    return 0;
}