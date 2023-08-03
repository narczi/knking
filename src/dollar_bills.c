#include <stdio.h>

#define HUNDRED_DOLLARS 100
#define TWENTY_DOLLARS 20
#define TEN_DOLLARS 10
#define FIVE_DOLLARS 5
#define ONE_DOLLAR 1

int main(){
	int dollar_bill[5] = {100, 20, 10, 5, 1};
	int dollars_amount = 93;
//	printf("Input dollars amount: ");
//	scanf("%d", &dollars_amount);

	int quotient = 1;

	for(int i=0; i<5; i++){
		quotient = dollars_amount / dollar_bill[i];
		dollars_amount = dollars_amount - quotient * dollar_bill[i];
		printf("%d = %d\n", dollar_bill[i], quotient);	
	}




	return 0;
}
