#include <stdio.h>

int main(){

	long i;
	int j = 1000000;

//	i = j * j; 			//tu będzie przepełnienie
	i = (long) j * j; 	//a tu jest dobrze

	printf("%ld\n", i);

	return 0;
}
