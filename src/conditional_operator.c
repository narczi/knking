#include <stdio.h>

int main(){

	int i, j, k;

	i = 1;
	j = 2;
	k = i > j ? i : j;
	k = (i >= 0 ? i : 0) + j;

	printf("%d\n", k);	

	return 0;
}
