#include <stdio.h>
#include <string.h>

int main()
{
    int T,n,i,j;
    char line[51][501];
    scanf("%d",&T);

    for(int test = 0; test < T; test++)
    {
        scanf("%d",&n);
        getchar();

        for(i = 0; i < n; i++)
        {
            gets(line[i]);
        }

        if(test!= 0)
        printf("\n");

        printf("Case %d:\n",test+1);

        for(i = 0; i < n; i++)
        {

            for(j = 0; line[i][j] != '\0'; j++)
            {
                if(line[i][j] == ' ' && line[i][j+1] == ' ')
                {
                    continue;
                }
                else
                {
                    printf("%c",line[i][j]);
                }

            }

            printf("\n");
        }
        

    }
    return 0;
}
