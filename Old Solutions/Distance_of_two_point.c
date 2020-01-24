#include <stdio.h>
#include <math.h>

int main()
{
	float x1, y1, x2, y2;
	double d;

	printf("Enter the vlaue of x1 and y1: ");
	scanf("%f %f", &x1, &y1);

	printf("Enter the value of x2 and y2: ");
	scanf("%f %f", &x2, &y2);

	d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1),2));

	printf("Distance: %.2lf\n", d);

	return 0;

}