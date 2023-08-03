#include <stdio.h>

int dokoptuj(int n)
{
	static int stos = 0;
	stos += n;
}

int main(void)
{
	printf("%d\n", dokoptuj(1));
	printf("%d\n", dokoptuj(1));
	printf("%d\n", dokoptuj(1));
	printf("%d\n", dokoptuj(1));
	printf("%d\n", dokoptuj(5));

	return 0;
}
