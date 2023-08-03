#include <stdio.h>

int main(){

	int n, d;

	printf("Input number to be checked: ");
	scanf("%d", &n);
	
	for (d = 2; d < n && n % d != 0; d++){
		;
	}

	if (d < n)
		printf("%d is divisible by %d\n", n, d);
	else
		printf("%d is prime\n", n);

	return 0;
}
