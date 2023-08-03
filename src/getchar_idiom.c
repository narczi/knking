#include <stdio.h>

int main(){
	
	int ch;

/* 	ver 1
	do {
		ch = getchar();
		putchar(ch);
	} while ( ch != '\n');
*/

/*	ver 2
	while((ch = getchar()) != '\n'){
		putchar(ch);
	}
*/

//	skips rest of line
//	ver 3 
/*
	while(getchar() != '\n')
		;
*/


//	skips blanks
// 	ver 4
	while((ch = getchar()) == ' ')
		;

	printf("%c\n", ch);

	return 0;
}
