#include <stdio.h>

int main(){

	int n, d;

	printf("Input number to be checked: ");
	scanf("%d", &n);
	
	for (d = 2; d < d * d; d++){
		if(n % d == 0)
			break;
	}

	if (d < n)
		printf("%d is divisible by %d\n", n, d);
	else
		printf("%d is prime\n", n);

	return 0;
}
