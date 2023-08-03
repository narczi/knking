#include <stdio.h>

#define NUM_RATES(x) ((int) (sizeof(x) / sizeof(x[0])))

int main(void){

	int i, low_rate, num_years, year;
	double initial_balance;
	double value[5];

	printf("Enter interest rate: ");
	scanf("%d", &low_rate);
	printf("Enter number of years: ");
	scanf("%d", &num_years);
	printf("Enter initial balance: ");
	scanf("%lf", &initial_balance);

	printf("\nYears");
	for(i = 0; i < NUM_RATES(value); i++){
		printf("%6d%%", low_rate + i);
		value[i] = initial_balance;
	}
	printf("\n");

	for(year = 1; year <= num_years; year++){
		printf("%3d    ", year);
		for(i = 0; i < NUM_RATES(value); i++){
			value[i] += (low_rate + i) / 100.0 * value[i];
			printf("%10.2f", value[i]);
		}
		printf("\n");
	}



	return 0;
}
