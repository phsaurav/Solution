#include <stdio.h>
#include <string.h>

int main() {

    char w[6];
    int t,i,r,d;

    scanf("%d",&t);

    for(i = 0; i< t; i++)
    {
        r = 0;
        scanf("%s",w);

        d = strlen(w);

        if(d > 3)
        {
            printf("3\n");
        }
        else
        {
            if(w[0]== 'o')
                r++;
            if(w[1]== 'n')
                r++;
            if(w[2]== 'e')
                r++;
            if(r >= 2)
                printf("1\n");
            r = 0;
            if(w[0]== 't')
                r++;
            if(w[1]== 'w')
                r++;
            if(w[2]== 'o')
                r++;
            if(r >= 2)
                printf("2\n");
        }
    }

    return 0;
}