#include <stdio.h>

int main(void){

	int a[10] = {0};

	for(int i = 0; i < 10; i++){
		a[i] = i;
		printf("%d ", a[i]);
	}

	printf("\n\n");


	for(int i = -10; i < 10; i++){
		printf("%d ", a[i]);
	}	

	return 0;
}
