#include <stdio.h>

int subt(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * subt(n - 1);
}

int func(int n)
{
	return n - 1;
}

int main(void)
{
	int a = 5;
	int result = func(func(func(func(a))));

	int rec_result = subt(a);

	printf("%d\n", result);
	printf("%d\n", rec_result);

	return 0;
}
