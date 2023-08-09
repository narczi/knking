// Chapter 11. Exercise 8.

#include <stdio.h>
#define N 10
#define NELEMS(x) (sizeof(x) / sizeof(x[0]))

int *find_largest(int a[], int n)
{
	int *largest = &a[0];
	for (int i = 0; i < n; i++){
		if (a[i] > *largest)
			*largest = a[i];
	}
	return largest;
}

int main(void)
{
	int a[N];

	for(int i = 0; i < N; i++){
		scanf("%d", &a[i]);
	}

	int *largest = find_largest(a, NELEMS(a));

	printf("The largest element is %d\n", *largest);

	return 0;
}
