#include <stdio.h>
#include <stdbool.h>

#define N 10

int main(){

	int digit_arr[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int digit_seen[N] = {0};
	int digit;
	long number_entered = 1;
	long n;

	while(number_entered > 0){
		printf("Enter a number: ");
		scanf("%ld", &number_entered);

		n = number_entered;

		while(n > 0){
			digit = n % 10; // wybieranie ostatniej cyfry z liczby
			digit_seen[digit]++;
			n /= 10; // obcinanie ostatniej cyfry z liczby
		}

		bool repeated_digits = false;

		for(int i = 0; i < N; i++){
			if(digit_seen[i]){
				repeated_digits = true;
			}
		}


		if(repeated_digits){
			printf("Repeated digits:\n");
			printf("Digit:        ");
			for(int i=0; i<10; i++){
				printf("%d ", digit_arr[i]);
			}
			printf("\n");
			printf("Occurrences:  ");
			for(int i=0; i<10; i++){
				printf("%d ", digit_seen[i]);
			}
			printf("\n");
		}else{
			printf("No repeated digit\n");
		}


		for(int i = 0; i < 10; i++){
			digit_seen[i] = 0;
		}
		

	}


	return 0;
}
