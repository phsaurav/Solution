#include <stdio.h>

int main()
{
    int partNum, budget, hotelNum, weekNum, count, flag, total, min;
    int cost, room;

    while (scanf("%d %d %d %d", &partNum, &budget, &hotelNum, &weekNum) == 4)
    {
        flag = 1;
        min = 0;

        for (count = 0; count < hotelNum; count++)
        {
            scanf("%d", &cost);
            for (int week = 0; week < weekNum; week++)
            {
                scanf("%d", &room);

                if (room >= partNum)
                {
                    total = partNum * cost;

                    if (total <= budget)
                    {
                        if (flag)
                        {
                            min = total;
                            flag = 0;
                        }

                        min = (min > total) ? total : min;
                    }
                }
            }
        }

        if (flag)
            printf("stay home\n");
        else
            printf("%d\n", min);
    }
    return 0;
}