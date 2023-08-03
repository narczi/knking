#include <stdio.h>

#define ARR_SIZE(x) ((int) (sizeof(x) / sizeof(x[0])))

int main(){

	int a[10] = {0};

	printf("%ld\n", sizeof(a));

	printf("no. of array elements: %d\n", ARR_SIZE(a));

	for(int i=0; i<ARR_SIZE(a); i++){
		printf("%d ", a[i]);
	}

	printf("\n");

	return 0;
}
