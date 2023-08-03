#include <stdio.h>

int main(){

	int a, b;

	a = 1;
	b = 0;

	if((a = b)){	
		printf("a jest takie samo jak b\n");
	}else {
		printf("a i b nie są takie same\n");
	}

	return 0;

}
