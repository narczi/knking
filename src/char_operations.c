#include <stdio.h>

int main(){

	char ch;
	int i;


	ch = 'b';
	printf("%c = %d\n", ch, ch);

	printf("a-z = %d - %d\n", 'a', 'z');

	printf("A-Z = %d - %d\n", 'A', 'Z');

	printf("%c \n", 32);

	if (ch >= 'a' && ch <= 'z')
		ch = ch - ' ';


	printf("%c\n", ch);

	ch = ch + 32;

	printf("%c\n", ch);



	return 0;
}
