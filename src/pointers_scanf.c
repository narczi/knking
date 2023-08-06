#include <stdio.h>

int main(void)
{
	int i;
	int *p = &i;

	scanf("%d", p);

	printf("%d\n", *p);




	return 0;
}
