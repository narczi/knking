#include <stdio.h>

#define N 10

int main(void){

	int digits[N] = {0};

	printf("%d\n", '1');

	for(int i = '1'; i < N + '1'; i++){
		printf("%d ", digits[i - '1']);
	}

	printf("\n");

	return 0;
}
