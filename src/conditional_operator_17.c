#include <stdio.h>

int main(){

	int i, j;

	i = 17;
	j = -17;

	printf("%d\n", i >= 0 ? i : -i);

	printf("%d\n", 5 - -i);

	return 0;
}
