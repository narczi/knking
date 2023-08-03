#include <stdio.h>

float income_tax(float income)
{
	float tax = 0.0f;

	if (income < 750){
		tax = income * 0.01;
	}else if (income < 2250){
		tax = ((income - 750) * 0.02) + 7.5;
	}else if (income < 3750){
		tax = ((income - 2250) * 0.03) + 37.5;
	}else if (income < 5250){
		tax = ((income - 3750) * 0.04) + 82.5;
	}else if (income < 7000){
		tax = ((income - 5250) * 0.05) + 142.5;
	}else if (income >= 7000){
		tax = ((income - 7000) * 0.05) + 230.0;
	}

	return tax;
}

int main(){

	float income;
	
	printf("Type in the amount of taxable income: ");
	scanf("%f", &income);
	printf("Income = $ %.2f\n", income);

	float tax = income_tax(income);

	printf("Tax due: $ %.2f\n", tax);

	return 0;
}
