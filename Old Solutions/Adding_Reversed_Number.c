#include <stdio.h>
#include <string.h>

int main()
{
    int N, i, j, k, l;
    int carry, temp, flag = 0;

    char num1[201];
    char num2[201];
    char rev1[201];
    char rev2[201];
    char res[501];

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        temp = 0;
        carry = 0;
        flag = 0;

        scanf(" %s %s", num1, num2);

        int len1 = strlen(num1);
        int len2 = strlen(num2);

        for (k = len1 - 1, j = 0; k >= 0; k--)
        {
            rev1[j++] = num1[k];
        }
        rev1[j] = '\0';
        for (k = len2 - 1, j = 0; k >= 0; k--)
        {
            rev2[j++] = num2[k];
        }
        rev2[j] = '\0';

        if (len1 >= len2)
        {
            for (l = 0, j = len1-1, k = len2-1; j >= 0; j--)
            {
                if (k >= 0)
                {
                    temp = ((rev1[j] - '0') + (rev2[k--] - '0')) + carry;
                }
                else
                {
                    temp = (rev1[j] - '0') + 0 + carry;
                }

                if (temp / 10 > 0)
                {
                    carry = temp / 10;
                    temp = temp % 10;
                }
                else
                    carry = 0;

                res[l++] = temp + '0';
            }
        }
        else
        {
            for (l = 0, j = len2-1, k = len1-1; j >= 0; j--)
            {
                if (k >= 0)
                {
                    temp = ((rev2[j] - '0') + (rev1[k--] - '0')) + carry;
                }
                else
                {
                    temp = (rev2[j] - '0') + 0 + carry;
                }

                if (temp / 10 > 0)
                {
                    carry = temp / 10;
                    temp = temp % 10;
                }
                else
                    carry = 0;

                res[l++] = temp + '0';
                
            }
        }
        if(carry > 0)
        {
            res[l++] = carry + '0';
            carry = 0;
        }
        
        res[l] = '\0';

        for (j = 0; res[j] != '\0'; j++)
        {
            if (flag == 0 && res[j] == '0')
                continue;
            else
            {
                flag = 1;
                printf("%c", res[j]);
            }
        }

        printf("\n");
    }

    return 0;
}
