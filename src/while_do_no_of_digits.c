#include <stdio.h>

int main(){

	int i;

	int n;
	int digits = 0;

	printf("Podaj liczbe: ");
	scanf("%d", &n);	

	do {
		n = n / 10;
		digits++;
	} while ( n != 0 );

	printf("Number of digits: %d\n", digits);
	
	return 0; 
}
