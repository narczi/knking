#include <stdio.h>

int main(){

	int number;

	for (;;){
		printf("Type in a number divisible by 3, 6 and 9: ");
		scanf("%d", &number);
		if (number % 3 != 0){
			continue;
		}
		if (number % 6 != 0){
			continue;
		}
		if (number % 9 != 0){
			continue;
		}
	
		printf("%d / 3 = %d\n", number, number / 3);
		printf("%d / 6 = %d\n", number, number / 6);
		printf("%d / 9 = %d\n", number, number / 9);
		break;
	
	}

	return 0;
}
