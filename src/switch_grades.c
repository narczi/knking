#include <stdio.h> 

int main(){

	int grade_tens;
	int grade_ones;
	printf("Podaj ilość punktów: ");
	scanf("%1d%1d", &grade_tens, &grade_ones);

	printf("Ilość punktów to: %d%d\n", grade_tens, grade_ones);

	switch (grade_tens){
		case 9:
			printf("A\n");
			break;
		case 8:
			printf("B\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 6:
			printf("D\n");
			break;
		case 5:
			printf("F\n");
			break;
		case 4:
			printf("F\n");
			break;
		case 3:
			printf("F\n");
			break;
		case 2:
			printf("F\n");
			break;
		case 1:
			printf("F\n");
			break;
		default:
			printf("Illegal amount of points\n");
			break;
	}

	return 0;
}
