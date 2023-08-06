#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACKSIZE 100

char stack[STACKSIZE] = {0};
char top = 0;

void push(char n);
int pop();
void make_empty(void);
void stack_overflow();
void stack_underflow();
bool is_full();
bool is_empty();

int main(void)
{
	char ch = 0;


	while(1){
		printf("Enter an RPN expression: ");
		while (ch != '='){	
			scanf(" %c", &ch);
			if (ch >= '0' && ch <= '9'){
				push(ch - '0');
			}else if (ch == '+'){
				push(pop() + pop());
			}else if (ch == '-'){
				int op2 = pop();
				int op1 = pop();
				int result = op1 - op2;
				push(result);
			}else if (ch == '*'){
				push(pop() * pop());
			}else if (ch == '/'){
				int op2 = pop();
				int op1 = pop();
				int result = op1 / op2;
				push(result);
			}else if (ch == 'q'){
				goto the_end;
			}
		}
		printf("Equals = %d\n", stack[top]);
		make_empty();
		ch = 0;
	}

	the_end:

	return 0;
}

void push(char n){
	if (is_full())
		stack_overflow();
	else
		stack[++top] = n;
}

int pop(){
	if(is_empty())
		stack_underflow();
	else
		return stack[top--];
}
void make_empty(void){
	top = 0;
}
void stack_overflow(){
	printf("Stack overflow. Expression is too complex. Terminating.\n");
	exit(EXIT_FAILURE);
}
void stack_underflow(){
	printf("Stack underflow. Not enough operands in the expression. Terminating.\n");
	exit(EXIT_FAILURE);
}
bool is_full(){
	return top == STACKSIZE ? true : false;
}
bool is_empty(){
	return top == 0 ? true : false;
}
