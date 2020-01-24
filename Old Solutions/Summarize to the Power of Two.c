#include <stdio.h>

int isPowerOfTwo(long long n);

int isPowerOfTwo(long long n)
{
  if (n == 0)
    return 0;
  while (n != 1)
  {
      if (n%2 != 0)
         return 0;
      n = n/2;
  }
  return 1;
}

int main()
{
    unsigned int a[120001];
    unsigned int b[120001];
    int n,i,flag,j,count = 0,once = 0;
    long long sum;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        b[i] = a[i];
    }

    for(i = 0; i < n; i++)
    {
        flag = 0;
        once = 0;
        if(a[i] == 0)
        continue;

        for(j = 0; j < n; j++)
        {
            if(i == j)
            continue;

            sum = (a[i] +b[j]);

            flag = isPowerOfTwo(sum);

            if(flag)
            {
                a[j] = 0;
                flag = 0;
                once = 1;
            }

        }

        if(once == 0)
        {
            count++;
        }
        else
        {
            a[i] = 0;
        }
    }

    printf("%d\n",count);
    

}