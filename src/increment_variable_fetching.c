#include <stdio.h>

int main(){

	int i, j;

	i = 2;
	j = i * i++;

	printf("%d\n", j);

	return 0;

}

// 1. Weź (fetch) wartość zmiennej i (tej po prawej stronie operatora *), i = 2
// 2. W tym momencie i ulega inkrementacji, i = 3
// 3. Weź wartość zmiennej i (po lewej stronie), i = 3 więc mamy 3
// 4. Mnożenie które się odbywa to tak naprawdę 3 * 2 co daje 6
