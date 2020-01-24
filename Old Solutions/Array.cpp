#include <bits/stdc++.h>

using namespace std;

int main()
{
    int set[3][101];
    int neg[3];
    int p0, p1, p2, pNeg, n, i, in, pos, flag, negPos;

    cin >> n;
    p0 = p1 = p2 = pNeg = 0;
    pos = negPos = 1;
    flag = 1;

    for (i = 0; i < n; i++)
    {
        cin >> in;

        if (in == 0)
        {
            set[2][p2++] = in;
        }
        else if (in > 0)
        {
            if(pos == 1 || pos == 3)
            {
                set[1][p1++] = in;
                pos = 2;
            }
            else if(pos == 2)
            {
                set[2][p2++] = in;
                pos = 0;
            }
            else
            {
                set[0][p0++] = in;
                pos = 3;
            }
        }
        else
        {
            if(flag)
            {
                set[0][p0++] = in;
                flag = 0;
            }
            else
            {
                if(pNeg == 2)
                {
                    if(negPos)
                    {
                        set[1][p1++] = neg[0];
                        set[1][p1++] = neg[1];
                        pNeg = 0;
                        negPos = 0;
                        neg[pNeg++] = in;
                    }
                    else
                    {
                        set[0][p0++] = neg[0];
                        set[0][p0++] = neg[1];
                        pNeg = 0;
                        negPos = 1;
                        neg[pNeg++] = in;
                    }
                }
                else
                {
                    neg[pNeg++] = in;
                }
            }  


        }
    }

    if(pNeg != 0)
    {
        if(pNeg == 1)
        {
            set[2][p2++] = neg[0];
        }
        else
        {
            set[1][p1++] = neg[0];
            set[1][p1++] = neg[1];
        }
    }

    cout << p0;

    for(i = 0; i < p0; i++)
    {
        cout << " " << set[0][i];
    }
   
    cout << endl;
    cout << p1;

    for(i = 0; i < p1; i++)
    {
        cout << " " << set[1][i];
    }

    cout << endl;
    cout << p2;

    for(i = 0; i < p2; i++)
    {
        cout << " " << set[2][i];
    }
    return 0;
}