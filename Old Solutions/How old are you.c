#include <stdio.h>

int converter(int a, int b, int c)
{
    int con;
    con = (a*1)+(b*100)+(c*10000);
    return con;
}

int main()
{
    int T,a,b,c,d,e,f,count,today,birth,diff;
    scanf("%d",&T);
    for(count=0; count <T; count++)
    {
        scanf("%d/%d/%d",&a,&b,&c);
        scanf("%d/%d/%d",&d,&e,&f);

        today = converter(a,b,c);
        birth = converter(d,e,f);

        diff = today - birth;
        diff = (diff < 0)? diff: diff/10000;

        if(diff < 0)
            printf("Case #%d: Invalid birth date\n",count+1);
        else if(diff > 130)
            printf("Case #%d: Check birth date\n",count+1);
        else if(diff == 0)
             printf("Case #%d: 0\n",count+1);
        else
             printf("Case #%d: %d\n",count+1,diff);
    }
    return 0;

}

