#include <stdio.h>

double median (double x, double y, double z)
{
	double median = 0;

	if 		(x <= y && x >= z || x <= z && x >= y)
		median = x;
	else if (y <= x && y >= z || y <= z && y >= x)
		median = y;
	else if (z <= x && z >= y || z <= y && z >= x)
		median = z;

	return median;
}

int main(void)
{

	printf("%g\n", median(4, 2, 5));

	return 0;
}
