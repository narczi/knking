#include <stdio.h>

#define M 5
#define N 5

int concatenate(int m, int n, int a[m], int b[n], int c[m+n])
{
	int i, j;
	for(i = 0; i < m; i++){
		c[i] = a[i];
		c[i+m] = b[i];
	}  
}

int main(void)
{
	int a[M] = {1, 2, 3, 4, 5};
	int b[N] = {1, 2, 3, 4, 5};
	int c[M+N];

	concatenate(M, N, a, b, c);

	for(int i = 0; i < M+N; i++){
		printf("%d ", c[i]);
	}

	return 0;
}
