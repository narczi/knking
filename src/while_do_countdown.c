#include <stdio.h>

int main(){

	int i;

	i = 10;

	do {
		printf("T minus %d and counting\n", i);
		--i;
	} while (i > 0);

	

	return 0;
}
