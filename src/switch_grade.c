#include <stdio.h>

int main(){

	int grade;
	printf("Grade: ");
	scanf("%d", &grade);

	switch (grade){
		case 4:	case 3: case 2: case 1: 
				printf("Passing\n");
				break;
		case 0: printf("Failing\n");
				break;
	   default: printf("Illegal grade\n");
				break;
	}

	printf("Koniec switcha\n");

	return 0;
}
