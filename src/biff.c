#include <stdio.h>
#include <ctype.h>

int main(void){

	int ch;

	while( (ch = getchar()) != '\n'){
		ch = toupper(ch);

		switch (ch) {
			case 'A':
			putchar('4');
			break;

			case 'B':
			putchar('8');
			break;

			case 'E':
			putchar('3');
			break;

			case 'I':
			putchar('1');
			break;
	
			case 'O':
			putchar('0');
			break;
			
			case 'S':
			putchar('5');
			break;

			default:
			putchar(ch);
			break;	
		}

		
	}

	printf("!!!!!!!!!\n");

	return 0;
}
