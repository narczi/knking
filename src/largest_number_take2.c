#include <stdio.h>

int main(){

	int number = 1;
	int largest;

	printf("Enter a number: ");	
	while(number != 0){
		scanf("%d", &number);
		
		if(number > largest){
			largest = number;	
		}
	}


	printf("Largest number is: %d\n", largest);

	return 0;
}
