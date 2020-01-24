#include <stdio.h>

int main()
{
    int n,i,j,k,max,l = 2,flag = 1;
    int a[100][100];

    scanf("%d",&n);
    max = n -1;
    j = 0;
    k = max;

    for(i = 1; i <= (n*n); i++)
    {

           a[j][k] = i;

            j++;
            k++;

            if((j>max || k > max) && flag == 1)
            {
                j = 0;
                k -= l;
                l++;
            }
            if(k < 0)
            {
                flag = 0;
                l -= 4;
                k = 0;
                j = 1;
            }

                if((j > max || k> max) && flag == 0)
            {
                k = 0;
                j -= l;
                l--;
            }




    }

    for(i = 0; i<= max; i++)
    {
        for(j = 0; j <= max; j++)
            printf("%d ",a[i][j]);
            printf("\n");
    }
    return 0;

}
