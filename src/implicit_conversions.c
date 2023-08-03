#include <stdio.h>

int foo(int a){
	float b = 3;
	
	return b;
}

int main(){

	//1. Different operand types (usual arithmetic conversion)
	printf("%.2f + %d = %.2f\n", 3.14f, 5, 3.14f + 5);

	//2. Assignment operator 
	int a = 5;
	float pi = 3.14f;
	float api = a + pi;
	printf("%.2f\n", api);


	//3. i 4. ale kompilator nie protestuje nawet z -Wall
	int c = foo(pi);
	

	return 0;
}
