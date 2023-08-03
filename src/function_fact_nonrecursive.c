#include <stdio.h>

int fact(int n)
{
	int result = 1;
	while(n > 0){
		result *= n;
		n--;
	}

	return result;
}

int main(void)
{
	printf("%d\n", fact(6));
}
