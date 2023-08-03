#include <stdio.h>

int fact(int n)
{
	if(n <= 1)
		return 1;
	else
		return n * fact(n - 1);
}

int power(int base, int exp)
{
	if(exp == 0)
		return 1;
	else
		return base * power(base, exp - 1);
}

int main(void)
{

	printf("%d\n", fact(6));

	printf("%d\n", power(2,5));

	return 0;
}
