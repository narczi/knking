#include <stdio.h>

int main(){

	float commission, value;
	int shares = 1;
	float share_price;

	while(shares != 0){
		printf("Enter the amount of shares: ");
		scanf("%d", &shares);

		printf("Enter the share price: ");
		scanf("%f", &share_price);	

		value = shares * share_price;
		printf("Trade value = %.2f\n", value);


		if (value < 2500.00f)
			commission = 30.00f + .017f * value;
		else if (value < 6250.00f)
			commission = 56.00f + .0066f * value;
		else if (value < 20000.00f)
			commission = 76.00f + .0034f * value;
		else if (value < 50000.00f)
			commission = 100.00f + .0022f * value;
		else if (value < 500000.00f)
			commission = 155.00f + .0011f * value;
		else 
			commission = 255.00f + .0009f * value;

		if (commission < 39.00f)
			commission = 39.00f;

		printf("Original broker's commission: $%.2f\n", commission);

		if (shares < 2000)
			commission = 33.00f + .03f * shares;
		else if (shares >= 2000)
			commission = 33.00f + .02f * shares;

		printf("New broker's commission: $%.2f\n", commission);	
	}


	return 0;
}
