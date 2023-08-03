#include <stdio.h>

int main(void){

/*	
	b)
	int i = 1;
	long j = 2;
	unsigned int k = 3;

	printf("%ld\n", sizeof(long));
	printf("%ld\n", sizeof(i + (int) j * k));
*/

/*
	c)
	int i = 1;
	float f = 2.0f;
	double d = 5.0;


	printf("%ld\n", sizeof(i));
	printf("%ld\n", sizeof(f));
	printf("%ld\n", sizeof(d));

	printf("%ld\n", sizeof(i*f/d));
*/


//	d)
	int i;
	float f;
	double d;

	d = i + f; // i + f daje floata, ale przy przypisaniu następuje cast do doubla
	printf("%ld\n", sizeof(d));

	return 0;
}
