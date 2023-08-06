#include <stdio.h>

int num = 12;
int *wsk = &num;

void func(int *const p){
	*p = *wsk;
}

int main(void)
{
	int a = 5;	

	func(&a);

	printf("%d\n", a);

	return 0;
}
