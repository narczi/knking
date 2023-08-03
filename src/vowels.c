#include <stdio.h>
#include <ctype.h>

int main(){

	int ch;
	int ch_count = 0;

	while((ch = getchar()) != '\n'){
		ch = toupper(ch);
		if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
			ch_count++;
		}
	}

	printf("Your sentence contains %d vowels\n", ch_count);

	return 0;
}
