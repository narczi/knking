#include <stdio.h>

int sum2 ();

int main(void){

	int a = 5;
	int b = 3;

	printf("%d\n", sum2(a, b));

	return 0;
}

int sum2 (int a, int b){

	return a+b;
}
