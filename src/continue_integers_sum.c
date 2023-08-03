#include <stdio.h>

int main(){

	int i;
	int n = 1;
	int sum = 0;

	while (n <= 10){
		printf("%d: ", n);
		scanf("%d", &i);
		if (i == 0)
			continue;
		sum += i;
		n++;
	}

	printf("sum = %d\n", sum);

	return 0;
}
