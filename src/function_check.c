#include <stdio.h>

int check (int x, int y, int n)
{
	if ((x > 0 && x <= n - 1) && (y > 0 && y <= n - 1))
		return 1;
	else
		return 0;
}

int main(void)
{

	int a = 13;
	int b = 3;
	int c = 15;

	printf("%d\n", check(a,b,c));

	return 0;
}
