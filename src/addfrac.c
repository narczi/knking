#include <stdio.h> 

int main(){

	int num1, denom1;
	int num2, denom2; 
	int result_num, result_denom;
	char sign;

	printf("Enter two fractions separated by a plus/minus/multiply/divide sign: ");
	scanf("%d /%d %c %d /%d", &num1, &denom1, &sign, &num2, &denom2);

	switch (sign){
		case '+':
			result_num = num1 * denom2 + num2 * denom1;
			result_denom = denom1 * denom2;
			printf("The sum is %d/%d\n", result_num, result_denom);
			break;
		case '-':
			num1 = num1 * denom2;
			num2 = num2 * denom1;
			denom1 = denom1 * denom2;
			denom2 = denom1;
			result_num = num1 - num2;
			if(result_num == 0){
				result_denom = 0;
			}else{
				result_denom = denom1;
			}
			printf("The quotient is %d/%d\n", result_num, result_denom);
			break;
		case '*':
			result_num = num1 * num2;
			result_denom = denom1 * denom2;
			printf("Wynik mnozenia: %d/%d\n", result_num, result_denom);
			break;
		case '/':
			result_num = num1 * denom2;
			result_denom = num2 * denom1;
			printf("Wynik dzielenia: %d/%d\n", result_num, result_denom);
			break;			
	}





	return 0;
}
