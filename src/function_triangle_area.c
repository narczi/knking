#include <stdio.h>

double triangle_area(double base, double height)
{
	double product;
	product = base * height;
	return product / 2;
}

int main(void)
{
	printf("%g\n", triangle_area(5,5));

	return 0;
}
