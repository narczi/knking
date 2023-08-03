#include <stdio.h>

#define BOOL int

typedef int Bool;
typedef int integer;

int main(){

	BOOL flag = 1;

	Bool flaszka = 0;

	if(flag){
		printf("prawda\n");
	}

	if(!flaszka){
		printf("nieprawda\n");
	}

	integer a = 5;
	printf("%d\n", a);	

	return 0;
}
