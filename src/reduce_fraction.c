// First seen:  Chapter 6.  - Loops, 	Programming Project 3.
// Modified in: Chapter 11. - Pointers, Programming Project 3.
#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
	int init_num = numerator;
	int init_den = denominator;

	int gcd, rem;
	while(denominator != 0){
		rem = numerator % denominator;
		numerator = denominator;
		denominator = rem;

		gcd = numerator;
	}

	*reduced_numerator = init_num / gcd;
	*reduced_denominator = init_den / gcd;
}

int main(void)
{
	int numerator, denominator;
	int reduced_numerator, reduced_denominator;

	printf("Enter a fraction: ");
	scanf("%d / %d", &numerator , &denominator);

	reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);


	printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);


	return 0;
}
