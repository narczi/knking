#include <stdio.h>

int main(){

	int m, n;
	int gcd;
	int rem;

	printf("Enter two numbers: ");
	scanf("%d %d", &m , &n);


	while(n != 0){
		rem = m % n;
		m = n;
		n = rem;

		gcd = m;
	}

	printf("gcd: %d\n", gcd);



	return 0;
}
