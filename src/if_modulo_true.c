#include <stdio.h>

int main(){

	int i, sum = 0;

	for (i = 0; i < 10; i++){
		if (i % 2){
			printf("%d ", i);
			continue;
		}
		sum += i;
	}

	printf("\n%d\n", sum);

	return 0;
}
