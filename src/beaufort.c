#include <stdio.h>

int main(){

	float knots;

	printf("Type in wind force in knots: ");
	scanf("%f", &knots);



	if(knots < 1){
		printf("Calm");
	}else if (knots <= 3){
		printf("Light air");
	}else if (knots <= 27){
		printf("Breeze");
	}else if (knots <= 47){
		printf("Gale");
	}else if (knots <= 63){
		printf("Storm");
	}else if (knots > 63){
		printf("Hurricane");
	}

	printf("\n");

	return 0;
}
