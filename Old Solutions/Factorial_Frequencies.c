#include <stdio.h>

int factCr(int value,int a[],int size);

int factCr(int value,int a[],int size)
{
    int cr,i,res;

    for(i = 0; i < size; i++)
    {
        res = a[i] * value + cr;
        a[i] = res% 10;
        cr = res/10;
    }

    while(cr != 0)
    {
        a[size] = cr % 10;
        cr  = cr/10;
        size++;
    }
    return size;
}

int main()
{   
    int input,i;
    while(1)
    {
        int num[10] = {0};
        int a[1000] = {1},size = 1;
        scanf("%d",&input);

        if(input == 0)
        break;

        for(i = 2; i <= input; i++)
        {
            size = factCr(i,a,size);
        }

        for(i = 0; i < size;i++)
        {
            num[a[i]]++;
        }

        printf("%d! --\n",input);
        printf("   (0)%5d    (1)%5d    (2)%5d    (3)%5d    (4)%5d\n",num[0],num[1],num[2],num[3],num[4]);
        printf("   (5)%5d    (6)%5d    (7)%5d    (8)%5d    (9)%5d\n",num[5],num[6],num[7],num[8],num[9]);

    }
    
    return 0;
}