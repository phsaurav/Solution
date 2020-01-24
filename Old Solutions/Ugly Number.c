#include <stdio.h>

int main() 
{
    long long testNumber = 1,temp;
    int count = 1;
    
    while(count <= 1500)
    { 
        testNumber++;
        
        temp = testNumber;
        
        while(temp != 1)
        {
            if(temp%2 == 0)
                temp /= 2;
            else if(temp%3 == 0)
                temp /= 3;
            else if(temp % 5 == 0)
                temp /= 5;
            else
                break;
        }
        
        if(temp == 1)
            count++;
        printf(" %d ",count);
        
    }
    
    printf("The 1500'th ugly number is %lld.\n",testNumber);
    

    return 0;
}

