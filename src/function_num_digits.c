#include <stdio.h>

int num_digits(int n)
{
	int digits = 0;
	while (n > 0){
		n = n / 10;
		digits++;
	}
	return digits;
}

int main(void)
{
	int number;
	scanf("%d", &number);

	printf("%d\n", num_digits(number));

	return 0;
}
