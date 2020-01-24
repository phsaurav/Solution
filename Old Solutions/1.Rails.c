#include <stdio.h>

int main()
{
    int seq[1001], n, i, test, top, newSeq;
    int input[1001], stack[1001];

    while (1)
    {
        scanf("%d", &n);

        if (n == 0)
            break;

        while (1)
        {
            test = 0;
            top = -1;
            newSeq = 0;

            for (i = 0; i < n; i++)
            {
                scanf("%d", &input[i]);

                if (input[0] == 0)
                {
                    newSeq = 1;
                    printf("\n");
                    break;
                }
            }

            if (newSeq)
                break;

            for (i = 0; i < n; i++)
            {
                seq[i] = i + 1;
            }
            for (i = 0; i < n; i++)
            {
                stack[++top] = seq[i];
                while (stack[top] == input[test])
                {
                    test++;
                    top--;
                    if (test == n)
                        break;
                }
            }

            if (top == -1)
            {
                printf("Yes\n");
            }
            else
                printf("No\n");
        }
    }
    return 0;
}