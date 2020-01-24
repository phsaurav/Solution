#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char input1[101];
    char input2[101];
    int totin1, totin2, stringLen;

    cin >> input1;
    cin >> input2;

    stringLen = strlen(input2);
    totin1 = totin2 = 0;

    for (int i = 0; i < stringLen; i++)
    {
        if (isupper(input1[i]))
        {
            totin1 += input1[i] - 'A';
        }
        else
        {
            totin1 += input1[i] - 'a';
        }

        if (isupper(input2[i]))
        {
            totin2 += input2[i] - 'A';
        }
        else
        {
            totin2 += input2[i] - 'a';
        }

        if (totin1 != totin2)
        {
            if (totin1 < totin2)
            {
                cout << "-1" << endl;
                return 0;
            }
            else if (totin1 > totin2)
            {
                cout << "1" << endl;
                return 0;
            }
        }
    }

    if (totin1 == totin2)
    {
        cout << "0" << endl;
    }
    else if (totin1 < totin2)
    {
        cout << "-1" << endl;
    }
    else if (totin1 > totin2)
    {
        cout << "1" << endl;
    }

    return 0;
}