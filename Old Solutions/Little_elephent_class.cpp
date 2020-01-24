#include <iostream>

using namespace std;

int main()
{
    char input[8][9],last = 0;
    int i,j;

    for(i = 0; i < 8; i++)
    {
        scanf("%s",input[i]);

    }

    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            if(last == input[i][j])
            {
                printf("NO");
                return 0;
            }

            last = input[i][j];
        }

        last = 0;
    }

    printf("YES");
    return 0;
}