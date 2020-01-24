#include <stdio.h>
#include <string.h>

int main()
{
    int m,n;
    
    int row, column,mineNum,count = 0;

    while(scanf("%d %d",&m,&n),m)
    {
        getchar();
        count++;
        char field[102][102] = {0};
        char out[102][102]= {0};
        for(row = 0; row < m; row++)
        {
            scanf("%s",&field[row]); 
        }

        for(row = 0; row < m; row++)
        {
            for(column = 0; column < n; column++)
            {
                mineNum = 0;

                if(field[row][column] == '*')
                out[row][column] = '*';
                else
                {
                    if(column - 1 >= 0)
                    {
                        if(field[row][column -1] == '*')
                            mineNum++;
                    }
                    if(column +1 < n)
                    {
                        if(field[row][column +1] == '*')
                            mineNum++;
                    }
                    if(row -1 >= 0)
                    {
                        if(field[row-1][column] == '*')
                            mineNum++;

                        if(column - 1 >= 0)
                        {
                            if(field[row-1][column -1] == '*')
                                mineNum++;
                        }
                        if(column +1 < n)
                        {
                            if(field[row-1][column +1] == '*')
                                mineNum++;
                        }
                    }
                    if(row +1 < m)
                    {
                        if(field[row+1][column] == '*')
                            mineNum++;

                        if(column - 1 >= 0)
                        {
                            if(field[row+1][column -1] == '*')
                                mineNum++;
                        }
                        if(column +1 < n)
                        {
                            if(field[row+1][column +1] == '*')
                                mineNum++;
                        }
                    }

                    out[row][column] = '0' + mineNum;
                }
            }
            out[row][column] = '\0';
        }
        if(count > 1)
        printf("\n");
        printf("Field #%d:\n",count);

        for(row = 0 ; row < m ; row++)
        {
            printf("%s\n",out[row]);
        }
        
    }
    return 0;
}