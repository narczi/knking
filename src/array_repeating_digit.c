#include <stdio.h>

#define N 10

int main(){

	int ch;

	int digits[N] = {0};

	while( (ch = getchar()) != '\n'){
		switch (ch){
			case '0':
				digits[0]++;
				break;
			case '1':
				digits[1]++;
				break;
			case '2':
				digits[2]++;
				break;
			case '3':
				digits[3]++;
				break;
			case '4':
				digits[4]++;
				break;
			case '5':
				digits[5]++;
				break;
			case '6':
				digits[6]++;
				break;
			case '7':
				digits[7]++;
				break;
			case '8':
				digits[8]++;
				break;
			case '9':
				digits[9]++;
				break;
		}
	}

	for(int i = 0; i < N; i++){
		printf("%d ", digits[i]);
	}

	printf("\n");

	for(int i = 0; i < N; i++){
		if(digits[i] > 1){
			printf("Repeated digit\n");
			break;
		}
	}

	return 0;
}
