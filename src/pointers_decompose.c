#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part)
{
	*int_part = (long) x;
	*frac_part = x - *int_part;
}

int main(void)
{
	double pi = 3.14159;

	long int_part;
	double frac_part;

	decompose(pi, &int_part, &frac_part);

	printf("%g = %ld + %g\n", pi, int_part, frac_part);


}
