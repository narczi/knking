#include <stdio.h>

#define N 10
#define X 10
#define Y 10


int main(void){

	int ident[Y][X] = {0};

	for(int row = 0; row < Y; row++){
		for(int col = 0; col < X; col++){
			ident[row][col] = '.';
		}
	}


	ident[5][5] = 'A';
	ident[3][5-1] = 'B';

	for(int row = 0; row < Y; row++){
		for(int col = 0; col < X; col++){
			printf("%c ", ident[row][col]);
		}
		printf("\n");		
	}

	printf("\n");

	return 0;
}
