#include <stdio.h>

int main(){

	float loan = 20000.0f;
	float interest_rate = 6.0f;
	float monthly_interest_rate = (interest_rate / 100) / 12;
	printf("mir: %f\n", monthly_interest_rate);
	float monthly_payment = 386.66f;
	int no_of_payments;


	printf("Number of payments: ");
	scanf("%d", &no_of_payments);

	for(int i=0; i<no_of_payments; i++){
		loan = loan - monthly_payment;
		loan = loan + loan * ((interest_rate/100)/12);
		printf("Balance: $%.2f\n", loan);
	}

	return 0;
}
