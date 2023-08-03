#include <stdio.h> 

int main(){

	int a, b, c;

	a = 5;
	c = (b = a + 2) - (a = 1);

	printf("%d\n", c);

	return 0;

}
