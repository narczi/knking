#include <stdio.h>

#define TAX 1.05

int main()
{
	float dollars;

	printf("Podaj dolary: ");
	scanf("%f", &dollars);
	printf("Dolary z podatkiem: $%.2f\n", dollars * TAX);


	return 0;
}
