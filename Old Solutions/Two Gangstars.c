#include <stdio.h>

int main()
{
    int h, l,total;

    scanf("%d %d",&h,&l);

    total = (h+l) - 1;
    h = total - h;
    l = total - l;

    printf("%d %d\n",h,l);

    return 0;

}
