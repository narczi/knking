#include <stdio.h>

#define SIZE(x) ( sizeof(x) / sizeof(x[0]) )

int largest(int arr[], int n)
{
	int max = arr[0];

	for(int i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

double average(int arr[], int n)
{
	double average;
	for(int i = 0; i < n; i++){
		average += arr[i];
	}

	return average / n;
}

int positive(int arr[], int n)
{
	int positive = 0;
	for(int i = 0; i < n; i++)
		if (arr[i] > 0)
			positive++;

	return positive;
}

int main(void)
{
	int a[] = {12, 42, 1, 2, 94, 21, 53, 31, 124, 21, 63, -1, -5};

	printf("%d\n", largest(a, SIZE(a)));
	printf("%g\n", average(a, SIZE(a)));
	printf("%d\n", positive(a, SIZE(a)));


	return 0;
}
