#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(int num)
{
	if(is_full()){
//		stack_overflow();
	}else{
		top++;
		contents[top] = num;
	}
}

int pop(void)
{
	if(is_empty()){
//		stack_underflow();
	}else{
		return contents[top--];
	}
}

void print_stack(void)
{
	int stack_size = top;
	while(stack_size > 0){
		printf("=== %2d ===\n", contents[stack_size]);
		stack_size--;
	}
}

int main(void)
{
	push(1);
	push(2);
	push(13);
	push(25);

	print_stack();

	pop();

	printf("\n");
	print_stack();

	make_empty();
	printf("\n");
	print_stack();

	return 0;
}
