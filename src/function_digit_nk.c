#include <stdio.h>

// zwróc k-tą cyfrę liczby n
int digit(int n, int k)
{
	int cyfra;
	while(k > 0){
		cyfra = n % 10;
		n = n / 10;
		k--;
	}

	return cyfra;
}

int main(void)
{
	int number, cyfra;

	printf("Type in a number: ");
	scanf("%d", &number);

	printf("Type in a digit: ");
	scanf("%d", &cyfra);

	printf("%d\n", digit(number, cyfra));

	return 0;
}
