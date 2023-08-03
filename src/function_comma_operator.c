#include <stdio.h>

int giveback(int n){

	return n;
}

int main(void)
{

	int a = 5;
	int b = 6;

	printf("%d\n", giveback( (a,b) )); 
	// poprzez umieszczenie argumentu w nawiasie możemy korzystać z przecinka
	// jak z operatora więc wynikiem wyrażenia (a,b) będzie b

	return 0;
}
