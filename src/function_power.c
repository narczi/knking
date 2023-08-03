#include <stdio.h>

int power1(int x, int n)
{
	int i, result = 1;

	for (i = 1; i <=n; i++)
		result = result * x;

	return result;
}

int power2(int x, int n)
{
	int result = 1;

	while (n-- > 0)
		result = result * x;

	return result;
}

int main(void)
{
	printf("%d\n", power1(2,5));
	printf("%d\n", power2(2,5));

	return 0;
}
