#include <stdio.h>

int main(){

	int number;
	printf("Enter a number to reverse: ");
	scanf("%d", &number);

	do {
		printf("%d", number % 10);
		number /= 10;
	} while ( number > 0);

	printf("\n");

	return 0;
}
