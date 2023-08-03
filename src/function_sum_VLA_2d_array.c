#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int sum_VLA_2d_array(int n, int m, int a[static n][m])
{
	int sum = 0;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			sum += a[i][j];
		}
	}

	return sum;
}

int main(void){

	int width, height;

	printf("Specify matrix width: ");
	scanf("%d", &width);

	printf("Specify matrix height: ");
	scanf("%d", &height);

	int matrix[height][width];

	srand((unsigned) time(NULL));

	for(int i = 0; i < height; i++){
		for(int j = 0; j < width; j++){
			matrix[i][j] = 1;
		}
	}	

	for(int i = 0; i < height; i++){
		for(int j = 0; j < width; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	printf("%d\n", sum_VLA_2d_array(height, width, matrix));	



	return 0;
}
