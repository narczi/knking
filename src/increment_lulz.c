#include <stdio.h>

int main(){

	int i, j, k;

	i = 1;
	j = 2;
	k = +i++ + +j++; // oblicza 1 + 2

	printf("%d %d %d\n", i, j, k);

	return 0;
}
