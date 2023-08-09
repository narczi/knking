// Chapter 11. Exercise 6.

#include <stdio.h>

#define N 10
#define NELEMS(x) (sizeof(x) / sizeof(x[0]))

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
	*largest = a[0];
	*second_largest = a[0];

	for(int i = 1; i < n; i++){
		if (a[i] > *largest)
			*largest = a[i];
		else if (a[i] < *largest && a[i] >= *second_largest)
			*second_largest = a[i];
	}
}

int main(void)
{
	int a[N];
	int biggest, second_biggest;

	for(int i = 0; i < N; i++){
		scanf("%d", &a[i]);
	}

	find_two_largest(a, NELEMS(a), &biggest, &second_biggest);
	printf("Largest element: %d, second largest: %d\n", biggest, second_biggest);

	return 0;
}
