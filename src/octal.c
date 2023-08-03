#include <stdio.h>

int main(){

	int number;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &number);

	printf("In octal, your number is: %d%d%d%d%d\n",	
												number / 8 / 8 / 8 / 8 % 8,
												number / 8 / 8 / 8 % 8,
												number / 8 / 8 % 8,  
												number / 8 % 8, 
												number % 8);

	return 0;
}
