#include <stdio.h>

int main(){

	int i = 0;

	for (; i < 10; ){ // pętla for przebrana za while, przebieraniec
		printf("%d. for\n", i++);
	}


	i = 0;
	while (i < 10){ //wykonuj dopóki jest prawdą
		printf("%d. while\n", i++);
	}

	return 0;
}
