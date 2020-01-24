#include <stdio.h>

int main()
{
    int a, b,press,diff;

    while(scanf("%d %d",&a,&b))
    {
        diff = abs(a-b);

        if(a == -1 && b == -1)
            break;
        if(diff <(100-diff))
            press = diff;
        else
            press = 100- diff;

        printf("%d\n",press);
    }

    return 0;

}

