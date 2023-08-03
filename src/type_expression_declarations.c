#include <stdio.h>

int main(void){

	char c = '\1';
	short s = 2;
	int i = -3;
	long m = 5;
	float f = 6.5f;
	double d = 7.5;

	printf("%ld\n", sizeof(c * i));
	printf("%ld\n", sizeof(s + m));
	printf("%ld\n", sizeof(f / c));
	printf("%ld\n", sizeof(d / s));
	printf("%ld\n", sizeof(f - d));
	printf("%ld\n", sizeof((int) f));
	printf("%ld\n", sizeof(f));


	return 0;
}
