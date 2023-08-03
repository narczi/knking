#include <stdio.h>

int power (int b, int e)
{
	if (e == 0)
		return 1;
	else
		return b * power(b, e - 1);
}

int power_condensed (int b, int e)
{
	return e == 0 ? 1 : b * power(b, e - 1);
}

int fact (int n)
{
	if (n <= 1)
		return 1;
	else
		return n * fact(n - 1);
}

int fact_condensed (int n)
{
	return n <= 1 ? 1 : n * fact(n - 1);
}

int main(void)
{
	printf("%d\n", fact(5));
	printf("%d\n", fact_condensed(5));
	printf("%d\n", power(2, 5));
	printf("%d\n", power_condensed(2, 5));

	return 0;
}
