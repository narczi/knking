#include <stdio.h>

int main(){
	
	int n = 11;
	printf("Enter size of magic square: %d\n", n);
	
	int square[n][n];

	//initialize magic square
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			square[i][j] = 0;
		}
	}

	//initialize 1
//	square[0][n / 2] = 1;

	int row = 0;
	int col = 0;
	for(int i = 0; i < n*n; i++){
		square[(n-i) % n][(n / 2 + i) % n] = i * i;
		
	}

	//print magic square
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%3d ", square[i][j]);
		}
		printf("\n");
	}




	return 0;
}
