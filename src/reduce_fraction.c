#include <stdio.h>

int main(){

	
	int m, n;
	int gcd;
	int rem;

	printf("Enter a fraction: ");
	scanf("%d / %d", &m , &n);

	int init_m = m;
	int init_n = n;

	while(n != 0){
		rem = m % n;
		m = n;
		n = rem;

		gcd = m;
	}

	printf("In lowest terms: %d/%d\n", init_m / gcd, init_n / gcd);


	return 0;
}
