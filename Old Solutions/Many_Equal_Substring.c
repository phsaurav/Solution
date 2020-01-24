#include <stdio.h>
#include <string.h>

int main()
{
    char t[51], output[2501];
    int n, k, i,j,flag = 0,l = 0,pos,m;

    scanf("%d %d ", &n, &k);
    scanf("%s",t);

    pos = n;

    for(i = 0; i < k; i++)
    {
        if(i == 0)
        {
            strcpy(output,t);

        for(j = 1; j < n; j++)
        {
            
            if(flag)
            break;
            m = j;
            for(l = 0; l <= n;l++)
            {
                    if(output[m] == '\0')
                    {
                    flag = 1;
                    break;  
                    }
                    if(output[m] != t[l])
                    break;
                    else
                    {
                    m++;

                    }

                }
            }

        }
        else
        {
            if(!flag)
            l = 0;

            for(j = l; j < n; j++)
            {
                output[pos++] = t[j];
            }
        }

    }

    output[pos] = '\0';

    printf("%s\n",output);
    return 0;
}