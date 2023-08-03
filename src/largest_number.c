#include <stdio.h>

int main(){

	float number;
	float largest;

	while(1){
		printf("Enter a number: ");
		scanf("%f", &number);
		if(number > largest){
			largest = number;
		}else if(number == 0)
			break;
	}

	printf("The largest number is: %.2f\n", largest);

	return 0;
}
