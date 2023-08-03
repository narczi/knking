#include <stdio.h>

#define N 10
#define SIZE(x) ( sizeof(x) / sizeof(x[0]) )

int main(void){

	int a[N] = {0};

	printf("Type in %d numbers: ", N);

	for(int i = 0; i < SIZE(a); i++){
		scanf("%d", &a[i]);
	}

	for(int i = SIZE(a)-1; i >= 0; i--){
		printf("%d ", a[i]);
	}
	
	printf("\n");


	return 0;
}
