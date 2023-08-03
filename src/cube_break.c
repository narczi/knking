#include <stdio.h>

int main(){

	int n;

	for(;;) {
		printf("Enter a number (0 to stop): ");
		scanf("%d", &n);
		if(n == 0)
			break;
		printf("%d cubed is %d\n", n, n * n * n);
	}

	return 0;
}
