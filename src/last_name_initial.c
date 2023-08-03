#include <stdio.h>

int main(){

	int ch;
	int ch_count = 0;
	int previous_ch;

	char first_char;

	int last_name[20];

	printf("Enter a first and last name: ");	

	scanf(" %c", &first_char); // space b4 %c = skip 0 or more whitespace

	while((ch = getchar()) != '\n'){
		if(ch == ' '){
			previous_ch = ch;
			continue;
		}else if(ch != ' ' && previous_ch == ' '){
			last_name[ch_count] = ch;
			ch_count++;
		}
	}

	last_name[ch_count] = '!';

	printf("You entered the name: ");

	for(int i = 0; last_name[i] != '!'; i++){
		putchar(last_name[i]);
	}

	
	printf(", %c.", first_char);
	printf("\n");

	return 0;
}
