#include <stdio.h>

int main(){

	int grade;
printf("Grade: ");
	scanf("%d", &grade);
	
	switch (grade) {
		case 4: printf("Excellente\n");
		case 3: printf("Goodo\n");
		case 2: printf("Averago\n");
		case 1: printf("Pooro\n");
		case 0: printf("Faillingo\n");
		default: printf("Illegal grade\n");
	}

	return 0;

}
