#include <stdio.h>

int main(){

	int i, j, k;

	i = 1;
	j = 2;
	k = ++i + j++;

	//k = 4, bo do i najpierw zostanie dodane 1, a potem j, które wynosi 2
	//dopiero po operacji kopiowania do zmiennej k, do j zostanie dodane 1
	//ergo i = 2, j = 3, k = 4

	printf("%d %d %d\n", i, j, k);


	return 0;
}
