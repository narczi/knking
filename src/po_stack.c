#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 10

int contents[STACK_SIZE];
int top = 0;

void stack_overflow()
{
	printf("Stack overflow. Terminating.\n");
	exit(EXIT_FAILURE);
}
void stack_underflow()
{
	printf("Stack underflow. Terminating.\n");
	exit(EXIT_FAILURE);
}
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
		stack_overflow();
	}else{
		contents[top++] = num;
	}
}
int pop(void)
{
	if(is_empty()){
		stack_underflow();
	}else{
		return contents[--top];
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
	int ch;
	bool proper_braces = true;

	while ((ch = getchar()) != '\n'){
		if (ch == '(' || ch == '{'){
			push(ch);
		}else if (ch == ')'){
			if(pop() == '('){
				continue;
			}else{
				proper_braces = false;
				break;
			}
		}else if (ch == '}'){
			if(pop() == '{'){
				continue;
			}else{
				proper_braces = false;
				break;
			}
		}
	}

	if(!is_empty())
		proper_braces = false;

	proper_braces ? printf("Proper braces\n") : printf("Braces are NOT proper!\n");

	return 0;
}
