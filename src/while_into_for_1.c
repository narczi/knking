#include <stdio.h>

int main(){
	
	int i;

	i = 1;

	while(i <= 128){
		printf("%d ", i);
		i *= 2;
	}

	i = 1;

	printf("\n");

	for(i = 1; i <= 128; i *= 2){
		printf("%d ", i);
	}

	printf("\n");

	return 0;
}
