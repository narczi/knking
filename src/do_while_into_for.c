#include <stdio.h>

int main(){

	int i;

	i = 9384;

	do {
		printf("%d ", i);
		i /= 10;
	} while (i > 0);

	printf("\n");

	for (i = 9384; i > 0; i /= 10){
		printf("%d ", i);
	}

	printf("\n");


	return 0;

}
