// 11. Pointers, Ex 4.
#include <stdio.h>

void swap(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}

int main(void)
{
	int a = 5;
	int b = 12;


	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);


	return 0;
}
