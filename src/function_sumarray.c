#include <stdio.h>

#define LEN 10

int sum_array(int [], int);
int sum_2d_array(int a[][LEN], int n);

int main(void){

	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	int b[10][LEN] = {0};

	for(int i = 0; i < 10; i++){
		for(int j = 0; j < LEN; j++){
			b[i][j] = i * i;
		}
	}

	for(int i = 0; i < 10; i++){
		for(int j = 0; j < LEN; j++){
			printf("%2d ", b[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	printf("Array sum a = %d\n", sum_array(a, 5));
	printf("Array sum b = %d\n", sum_2d_array(b, LEN));

	return 0;
}

int sum_array(int a[], int n)
{
	int sum = 0;

	for(int i = 0; i < n; i++){
		sum += a[i];
	}

	return sum;
}

int sum_2d_array(int a[][LEN], int n)
{
	int sum = 0;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < LEN; j++){
			sum += a[i][j];
		}
	}

	return sum;
}
