#include <stdio.h>
#include <stdlib.h>

void print_int(int i)
{
	if (i < 0)
		return;
	printf("%d\n", i);
}

int main(void){

	int a = -5;
	int b = 10;

	print_int(a);

	printf("%d\n", b);

	return 0;
}
