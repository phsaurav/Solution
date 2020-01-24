#include <iostream>

using namespace std;

int main()
{
    int test, n, dur, mile, juice, temp, tnum = 0;

    cin >> test;

    while (test--)
    {
        tnum++;

        cin >> n;

        mile = juice = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> dur;

            temp = dur;

            if (temp > 0)
            {
                mile += 10;
                temp -= 29;

                if (temp > 59)
                {
                    mile += 20 * (temp / 60);

                    temp %= 60;
                }
                if(temp > 0)
                mile = (temp > 30) ? (mile + 20) : (mile + 10);
            }

            if (dur > 0)
            {
                juice += 15;
                dur -= 59;

                if (dur > 119)
                {
                    juice += 30 * (dur / 120);
                    dur %= 120;
                }

                if(dur > 0)
                juice = (dur > 60) ? (juice + 30) : (juice + 15);
            }
        }

        if (mile < juice)
            cout << "Case " << tnum << ": "
                 << "Mile " << mile << endl;

        else if (juice < mile)
            cout << "Case " << tnum << ": "
                 << "Juice " << juice << endl;

        else
            cout << "Case " << tnum << ": "
                 << "Mile "
                 << "Juice " << mile << endl;
    }

    return 0;
}