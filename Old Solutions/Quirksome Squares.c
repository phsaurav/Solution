#include <stdio.h>

int main() 
{
    int inputNum;
    
    while(scanf("%d",&inputNum) != EOF)
    {
        if(inputNum == 2)
        {
            printf("00\n01\n81\n");
        }
        
        if(inputNum == 4)
        {
            printf("0000\n0001\n2025\n3025\n9801\n");
        }
        
        if(inputNum == 6)
        {
            printf("000000\n000001\n088209\n494209\n998001\n");
        }
        
        if(inputNum == 8)
        {
            printf("00000000\n00000001\n04941729\n07441984\n24502500\n25502500\n52881984\n60481729\n99980001\n");
        }
    }
    return 0;
}

