#include <stdio.h>

#define N 21

int main(){

	int a[] = {5, 1, 9, [2] = 29, [9] = 7, [20] = 48};

	for(int i = 0; i < N; i++){
		printf("%d ", a[i]);
	}

	printf("\n");

	return 0;
}
