#include <stdio.h>
#include <ctype.h>
#include <math.h>


int main()
{
    char line[201];
    int i,num[100],j= 0,k,l = 0;
    double sum = 0,x = 0, y = 0,distance;


    while(gets(line))
    {
        distance = 0;
        x = 0;
        y = 0;
        if(toupper(line[0]) == 'E' && toupper(line[1]) == 'N' && toupper(line[2]) == 'D')
            break;
        l++;

        for(i = 0 ; line[i] != '.'; i++)
        {
            if(line[i] == ',')
                continue;
            else
            {
                if(isdigit(line[i]))
                {
                    num[j] = (line[i] -  '0');
                    ++j;
                    if(!isdigit(line[i+1]))
                    {
                        sum = 0;
                        for(k = 0 ; j > 0; j--,k++)
                        {

                            sum += (float) num[k] * pow(10,j-1);
                        }
                    }
                }
                else
                {
                    if(toupper(line[i]) == 'N' && line[i+1] != 'E' && line[i+1] != 'W')
                        y += sum;
                    if(toupper(line[i]) == 'S' && line[i+1] != 'E' && line[i+1] != 'W')
                        y -= sum;
                    if(toupper(line[i]) == 'E' && line[i+1] != 'E' && line[i+1] != 'W')
                        x += sum;
                    if(toupper(line[i]) == 'W' && line[i+1] != 'E' && line[i+1] != 'W')
                        x -= sum;
                    if(toupper(line[i]) == 'N' && line[i+1] == 'E')
                        {
                            x += (sum /sqrt(2));
                            y += (sum/sqrt(2));
                            i++;
                        }
                    if(toupper(line[i]) == 'S' && line[i+1] == 'E')
                        {
                            x += (sum / sqrt(2));
                            y -= (sum/sqrt(2));
                            i++;
                        }
                    if(toupper(line[i]) == 'S' && line[i+1] == 'W')
                        {
                            x -= (sum / sqrt(2));
                            y -= (sum/sqrt(2));
                            i++;
                        }
                    if(toupper(line[i]) == 'N' && line[i+1] == 'W')
                        {
                            x -= (sum /sqrt(2));
                            y += (sum/sqrt(2));
                            i++;
                        }
                }
            }
        }

        distance = sqrt((x*x)+(y*y));

        printf("Map #%d\n",l);
        printf("The treasure is located at (%.3f,%.3f).\n",x,y);
        printf("The distance to the treasure is %.3f.\n\n",distance);
    }

	return 0;
}
