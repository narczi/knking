#include <stdio.h>

int main(){

	int a, b, c, d, e, f;
	a = 1; b = 2; c = 3; d = 4; e = 5; f = 6;

	(a = (b += (((c++) - d) + ((--e) / (-f)))));

	printf("%d\n", a);
	
	return 0;

}
