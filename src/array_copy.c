#include <stdio.h>
#include <string.h>

int main(void){

	int a[10];
	int b[10] = {0};

	for(int i = 0; i < 10; i++){
		a[i] = i * 36;
		printf("%d ", a[i]);
	}

	printf("\n");

	/*for(int i = 0; i < 10; i++)
		b[i] = a[i];*/

	memcpy(b, a, sizeof(a));

	for(int i = 0; i < 10; i++){
		printf("%d ", b[i]);
	}

	printf("\n");


	return 0;
}
