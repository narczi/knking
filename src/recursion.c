#include <stdio.h>

int power (int x, int n)
{
	//formula: x^n = x * x^n-1
	if(n == 0)
		return 1;
	else
		return x = x * power(x, n - 1);

}

int fact(int n)
{
	//formula: n! = n * (n-1)!
	if (n <= 1)
		return 1;
	else
		return n = n * fact(n-1);
}

int main(void){

	int a = 5;

	printf("%d\n", fact(a));

	printf("%d\n", power(2,a));
	

	return 0;
}
