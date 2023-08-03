#include <stdio.h>

int sum_array(int a[], int n)
{
	static int sum = 0;

	for(int i = 0; i < n; i++){
		sum += a[i];
	}


	return sum;
}

int main(void)
{
	int b[] = {3, 0, 3, 4, 1};

	int total1 = 0;
	int total2 = 0;

	total1 = sum_array(b, 5);
	total2 = sum_array(b, 5);

	printf("%d\n", total1);
	printf("%d\n", total2);

	return 0;
}
