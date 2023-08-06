#include <stdio.h>

int main(void)
{
	int i = 5;
	int *p = &i;
	int *q;

	q = *&p;


	printf("%d\n", i);
	printf("%d\n", *p);
	printf("%d\n", *&i);

	printf("%d\n", *q);

	return 0;
}
