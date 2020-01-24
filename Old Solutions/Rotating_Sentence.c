#include <stdio.h>
#include <string.h>

int main() 
{
    char inputLine[101][101]={0} ;
    int row = 0,col,stringLength,maxLength = 0,totalRow = 0;
    
    while(scanf("%[^\n]",inputLine[row]) != EOF)
    {
        stringLength = strlen(inputLine[row]);
        
        if(stringLength > maxLength)
            maxLength = stringLength;
        row++;
        getchar();
    }
    
    totalRow = row - 1;
    
    for(col = 0; col < maxLength; col++)
    {
        for(row = totalRow; row >= 0; row--)
        {
            if(inputLine[row][col] == '\0')
                printf(" ");
            else 
                printf("%c",inputLine[row][col]);
        }
        
        printf("\n");
    }
        
        
    return 0;
}

