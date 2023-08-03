#include <stdio.h>
#include <ctype.h>

int main(void){

	int letters[100];
	int letter_count = 0;
	int ch;

	int i = 0;

	while( (ch = getchar()) != '\n'){
		letters[i] = ch;
		i++;
		letter_count++;
	}

	for(int i = 0; i < letter_count; i++){

		ch = toupper(letters[i]);

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
