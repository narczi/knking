#include <stdio.h>

int main(){

	int ch;
	int ch_count = 0;

	while((ch = getchar()) != '\n'){
		ch_count++;
	}

	printf("Your message was %d character(s) long\n", ch_count);

	return 0;
}
