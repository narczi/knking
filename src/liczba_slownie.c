#include <stdio.h>

int main(){

	int tens, ones;

	scanf("%1d%1d", &tens, &ones);

	switch (tens){
		case 1:
			printf("Jedenaście");
			break;
		case 2:
			printf("Dwadzieścia ");
			break;
		case 3:
			printf("Trzydzieści ");
			break;
		case 4:
			printf("Czterdzieści ");
			break;
		case 5:
			printf("Pięćdziesiąt ");
			break;
		case 6:
			printf("Sześćdziesiąt ");
			break;
		case 7:
			printf("Siedemdziesiąt ");
			break;
		case 8:
			printf("Osiemdziesiąt ");
			break;
		case 9:
			printf("Dziewięcdziesiąt ");
			break;
	}

	switch (ones){
		case 1: 
			printf("jeden");
			break;
		case 2: 
			printf("dwa");
			break;
		case 3: 
			printf("trzy");
			break;
		case 4: 
			printf("cztery");
			break;
		case 5: 
			printf("pięć");
			break;
		case 6: 
			printf("sześć");
			break;
		case 7: 
			printf("siedem");
			break;
		case 8: 
			printf("osiem");
			break;
		case 9: 
			printf("dziewięć");
			break;
	}

	printf("\n");

	return 0;
}
