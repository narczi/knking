#include <stdio.h>

#define N 10

int main(void)
{
	int a[N];
	for(int i = 0; i < N; i++){
		printf("%p\n", &a[i]);
	}

	return 0;
}
