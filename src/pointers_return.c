#include <stdio.h>

int *max(int *a, int *b)
{
	if(*a > *b)
		return a;
	else
		return b;
}

int main(void)
{
	int i, j;
	int *p;

	i = 5;
	j = 6;

	p = max(&i, &j);

	printf("max = %d\n", *p);

}
