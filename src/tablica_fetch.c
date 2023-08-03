#include <stdio.h>

int main(){

	int tablica[10] = {1,2,3,4,5,6,7,8,9,10};

	for(int i = 0; i<10;){
		printf("%d, ", tablica[++i]);
	}

	return 0;

}
