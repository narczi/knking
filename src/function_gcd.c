#include <stdio.h>

int gcd_normal(int m, int n)
{
	int rem;
	while(n != 0){
		rem = m % n;
		m = n;
		n = rem;
	}

	return m;
}

int gcd_re(int m, int n)
{
	if (n == 0)
		return m;
	else
		return gcd_re(n, m % n);
}

int main(void)
{
	int a = 270;
	int b = 18;


	printf("%d\n", gcd_normal(a,b));

	printf("%d\n", gcd_re(a,b));

	return 0;
}
