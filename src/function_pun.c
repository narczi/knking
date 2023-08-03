#include <stdio.h>

void print_num(int n), print_pun(void); // combined function declarations

int main(void)
{
	int a =5;

	print_pun();
	print_num(a);

	return 0;
}

void print_pun(void){
	(void)printf("To C, or not to C: that is the question.\n");
}

void print_num(int n){
	printf("%d\n", n);
}
