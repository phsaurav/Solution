#include <iostream>

using namespace std;

int main()
{
    int n,k,i;
    int score[50],count = 0;

    cin >> n >> k;

    for(i = 0; i < n; i++)
    {
        cin >> score[i];
    }

    for(i = 0; i < n; i++)
    {
        if(score[i] >= score[k-1] && score[i] > 0)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}