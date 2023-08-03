#include <stdio.h> 

int main(){

	int a, b, c, d;

	printf("Enter 4 integers: ");
	
	scanf("%d %d %d %d", &a, &b, &c, &d);

	int largest, smallest;

	if (a > b && a > c && a > d){
		largest = a;
	}else if (b > a && b > c && b > d){
		largest = b;
	}else if (c > a && c > b && c > d){
		largest = c;
	}else if (d > a && d > b && d > c){
		largest = d;
	}

	printf("Largest integer is %d\n", largest);

	if (a < b && a < c && a < d){
		smallest = a;
	}else if (b < a && b < c && b < d){
		smallest = b;
	}else if (c < a && c < b && c < d){
		smallest = c;
	}else if (d < a && d < b && d < c){
		smallest = d;
	}

	printf("Smallest integer is %d\n", smallest);

	return 0;
}
