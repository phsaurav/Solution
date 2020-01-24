#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[56];
    int i, j,n;

    scanf("%d ",&n);
    scanf("%s",s);

    for(i = 0,j = 0; i < n; i += j)
    {
        printf("%c",s[i]);
        j++;
    }
    printf("\n");

    return 0;
}