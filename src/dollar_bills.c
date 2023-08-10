// First seen:  Chapter 2.  - C fundamentals, Programming Project 4.
// Modified in: Chapter 11. - Pointers, 	  Programming Project 1.
#include <stdio.h>

#define HUNDRED 0
#define TWENTY  1
#define TEN 	2
#define FIVE 	3
#define ONE		4

int dollar_bill[5] = {100, 20, 10, 5, 1};
int banknote[5] = {0};

void pay_amount(int dollars, int *hundreds, int *twenties, int *tens, int *fives, int *ones)
{
	int quotient = 1; // "quotient" znaczy iloraz czyli wynik dzielenia

	for(int i=0; i<5; i++){
		quotient = dollars / dollar_bill[i];
		dollars -= quotient * dollar_bill[i];
		banknote[i] = quotient;
	}	
}

int main(void)
{
	int dollars;

	printf("Enter a dollar amount: ");
	scanf("%d", &dollars);

	pay_amount(dollars, &banknote[HUNDRED], &banknote[TWENTY], &banknote[TEN],
						&banknote[FIVE], &banknote[ONE]);

	for(int i = 0; i < 5; i++){
		printf("$%-3d bills : %d\n", dollar_bill[i], banknote[i]);
	}
	
	return 0;
}
