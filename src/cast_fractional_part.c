#include <stdio.h>

int main(){

	float pi = 3.14;
	float fract; // po przecinku

	fract = pi - (int) pi; // 3.14 - 3.00

	printf("%.2f\n", pi);
	printf("%.2f\n", fract);

}
