#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    char a[1000];
    int d,flag = 1,i,count;

    while(scanf("%[^\n]",a) != EOF )
   {
       d = strlen(a);
       count = 0;
       flag = 1;

       for(i = 0; i< d; i++)
       {
           if(isalpha(a[i]) != 0 )
           {
           if(flag)
           {
               count++;
           }
           flag = 0;
           }
           else
            flag = 1;
       }
        printf("%d\n",count);
        getchar();
   }
    return 0;
}
