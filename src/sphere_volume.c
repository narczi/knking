#include <stdio.h>

#define PI 3.14159265359

int power(int base, int exponent){
	int ret_base = base;
	while(exponent > 1){
		ret_base = ret_base * base;
		exponent--;
	}

	return ret_base;
}

int main(){

	int sphere_radius;

	printf("Enter sphere radius: ");
	scanf("%d", &sphere_radius);

	float sphere_volume = 4.0f/3.0f * PI * power(sphere_radius, 3);

	printf("%.2f\n", sphere_volume);
	


	return 0;
}


