#include <stdio.h>

#define N 4

int main(void){

	const int a[N][N] = { {1},
					{0, 1},
					{0, 0, 1},
					{0, 0, 0, 1}, };

	int b[N][N] = { [0][0] = 1,
					[1][1] = 1,
					[2][2] = 1,
					[3][3] = 1 };

	for(int row = 0; row < N; row++){
		for(int col = 0; col < N; col++){
			printf("%d ", a[row][col]);
		}
		printf("\n");
	}

	printf("\n");

	for(int row = 0; row < N; row++){
		for(int col = 0; col < N; col++){
			printf("%d ", b[row][col]);
		}
		printf("\n");
	}

	return 0;
}
