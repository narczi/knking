#include <stdio.h>

int main(){

	//Zad 9
	//a
	int i, j, k;
	/*i = 7;
	j = 8;
	
	i *= j + 1;

	printf("%d %d\n", i, j);

	//b
	i = j = k = 1;
	
	i += j += k;

	printf("%d %d %d\n", i, j, k);

	//c
	i = 1;
	j = 2;
	k = 3;
	
	i -= j -= k;

	printf("%d %d %d\n", i, j, k);

	//d
	i = 2;
	j = 1;
	k = 0;
	
	i *= j *= k;

	printf("%d %d %d\n", i, j, k);
*/
	//Zad 10
	//a
	i = 6;
	j = i += i;
	
	printf("%d %d\n", i, j);

	//b
	i = 5;
	j = (i -= 2) + 1;

	printf("%d %d\n", i, j);

	//c
	i = 7;
	j = 6 + (i = 2.5);

	printf("%d %d\n", i, j);

	//d
	i = 2;
	j = 8;
	j = (i = 6) + (j = 3);

	printf("%d %d\n", i, j);

	return 0;
}
