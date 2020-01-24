#include <iostream>

using namespace std;

void towerOfHanoi(int, char, char, char);

int main()
{
    int diskNum;

    cout << "Enter the number of disk: ";
    cin >> diskNum;

    towerOfHanoi(diskNum, 'A', 'C', 'B');

    return 0;
}

void towerOfHanoi(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        cout << "Disk " << n << " from " << from << " to " << to << endl;
        return;
    }

    towerOfHanoi(n-1,from,aux,to);

    cout << "Disk " << n << " from " << from << " to " << to << endl;

    towerOfHanoi(n-1,aux,to,from);
}
