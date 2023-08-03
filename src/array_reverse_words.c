#include <stdio.h>

#define N 50

int main(void){
	
	int ch;
	char sentence[N];
	char terminating;
	int sen_letter_count = 0;

	while( (ch = getchar()) != '\n'){
		if(ch == '!' || ch == '.' || ch == '?'){
			terminating = ch;			
		}else{
			sentence[sen_letter_count] = ch;
			sen_letter_count++;
		}
	}

	int word_letter_count = 0;
	int whitespace_count = 0;

	for(int i = sen_letter_count-1; i >= 0; i--){
		word_letter_count++;
		if(sentence[i] == ' ' || i == 0){
			whitespace_count++;
			if(i == 0){
				putchar(' ');
			}
			if(whitespace_count == 1){
				for(int j = 1; j < word_letter_count; j++)
					putchar(sentence[i+j]);
			}else{
				for(int j = 0; j < word_letter_count; j++)
					putchar(sentence[i+j]);
			}
			

			word_letter_count = 0;			
		}
		
	}

	putchar(terminating);

	printf("\n");

	return 0;
}
