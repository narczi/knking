#include <stdio.h>

#define SIZE(x) ( sizeof(x) / sizeof(x[0]) )

double inner_product(double a[], double b[], int n)
{
	double product = 0;
	for(int i = 0; i < n; i++){
		product += a[i] * b[i];
	}

	return product;
}

int main(void)
{
	double vec_a[] = {1,2,3,4,5};

	printf("%g\n", inner_product(vec_a, vec_a, SIZE(vec_a)));

	return 0;
}
