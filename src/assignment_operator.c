#include <stdio.h>

int main(){

	int i, j, k;
	i = 1;
	k = 1 + (j = i);

	printf("%d %d %d\n", i, j, k);

	j + k = i;

	return 0;
}
