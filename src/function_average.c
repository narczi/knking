#include <stdio.h>



int main(void)
{
	double average (double a, double b);
	//zadeklarowanie funkcji w mainie daje dostęp do niej tylko mainowi

	double x, y, z;

	printf("Enter three numbers: ");
	scanf("%lf%lf%lf", &x, &y, &z);

	printf("Average of %g and %g: %g \n", x, y, average(x, y));
	printf("Average of %g and %g: %g \n", y, z, average(y, z));
	printf("Average of %g and %g: %g \n", x, z, average(x, z));

	return 0;
}

double average (a, b) 
double a, b; //old style K&R parameter type declarations
{

	return (a + b) / 2;
}
