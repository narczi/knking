#include <stdio.h>

//int sum_VLA_array(int n, int a[n]);
int sum_VLA_array(int, int [*]);

int main(void){

	int n;
	printf("Type in number of elements to sum: ");
	scanf("%d", &n);
	int a[n];

	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	printf("The sum is: %d\n", sum_VLA_array(n, a));

	return 0;
}

int sum_VLA_array(int n, int a[n])
{
	int sum = 0;

	for(int i = 0; i < n; i++){
		sum += a[i];
	}

	return sum;
}
