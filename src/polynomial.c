#include <stdio.h>

int power(int base, int exponent){
	int ret_base = base;
	while(exponent > 1){
		ret_base = ret_base * base;
		exponent--;
	}
	return ret_base;
}

// solve 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

int main()
{
	int x = 2;
//	printf("Podaj x: ");
//	scanf("%d", &x);

	int polynomial = 3 * power(x,5) + 
					 2 * power(x,4) - 
					 5 * power(x,3) - 
						 power(x,2) + 
					 7 * x - 6;
	
	printf("%d + %d - %d - %d + %d - %d", 
							3 * power(x,5), 
							2 * power(x,4), 
							5 * power(x,3),
								power(x,2),
							7 * x,
							6 );
	printf("\n%d\n", polynomial);

	return 0;
}
