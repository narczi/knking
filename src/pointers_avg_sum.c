// 11. Pointers, Ex 3.
#include <stdio.h>

#define N 10

void avg_sum(double a[], int n, double *avg, double *sum)
{
	int i;

	*sum = 0.0;
	for(i = 0; i < n; i++)
		*sum += a[i];
	*avg = *sum / n;
}

int main(void)
{
	double arr[N];

	double average;
	double suma;

	for(int i = 0; i < N; i++){
		scanf("%lf", &arr[i]);
	}

	avg_sum(arr, N, &average, &suma);

	printf("avg = %g\n", average);
	printf("sum = %g\n", suma);

	return 0;
}
