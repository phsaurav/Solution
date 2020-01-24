#include <stdio.h>

int main()
{
    int T;
    int G, L;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &G, &L);

        if (G == L || L % G == 0)
        {
            printf("%d %d\n", G, L);
            continue;
        }
            
            printf("-1\n");
    }
    return 0;
}