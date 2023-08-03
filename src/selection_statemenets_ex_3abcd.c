#include <stdio.h>

int main(void){

	int i, j, k;

	//a 
	/*i = 3;
	j = 4;
	k = 5;

	printf("%d\n", i < j || ++j < k);
	printf("%d %d %d\n", i, j, k);*/

	//b
	/*i = 7;
	j = 8;
	k = 9;

	printf("%d\n", i - 7 && j++ < k);
	printf("%d %d %d", i, j, k);*/

	//c
	/*i = 7;
	j = 8;
	k = 9;
	
	printf("%d\n", (i = j) || (j = k));
	printf("%d %d %d\n", i, j, k);*/

	//d
	i = 0;
	j = 0;
	k = 0;

	printf("%d\n", i || ++j && ++k);
	printf("%d %d %d\n", i, j, k);
	printf("%d\n", k);


	return 0;
}
