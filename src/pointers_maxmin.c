#include <stdio.h>

#define N 10
#define SIZE(x) (sizeof(x) / sizeof(x[0]))

void max_min(int a[], int n, int *max, int *min)
{
	*max = *min = a[0];

	for(int i = 1; i < n; i++){
		if (a[i] > *max)
			*max = a[i];
		else if (a[i] < *min)
			*min = a[i];
	}
}

int main(void)
{
	int b[N] = {52, 24, 93, 21, 54, 85, 22, 56, 12, 33};

	int big, small;

	max_min(b, SIZE(b), &big, &small);

	printf("Largest num: %d\nSmallest num: %d\n", big, small);

	return 0;
}
