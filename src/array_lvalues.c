#include <stdio.h>

int main(){

	int a[10] = {0};

	a[0] = 1;
	++a[2];

	for(int i=0; i<10; i++){
		printf("%d ", a[i]);
	}

	return 0;
}
