#include <stdio.h>

#define ALPHABET 26

int main(void){

	int message[80];
	int ch;
	int letter_count = 0;

	printf("Enter message to be encrypted: ");

	while( (ch = getchar()) != '\n'){
		message[letter_count] = ch;
		letter_count++;
	}


	int shift;
	printf("Enter shift amount: ");
	scanf("%d", &shift);

	

	int i = 0;
	while(letter_count > 0){
		if( message[i] >= 'a' && message [i] <= 'z' ){
			putchar((message[i] - 'a' + shift) % 26 + 'a');
		}else if(message[i] >= 'A' && message [i] <= 'Z'){
			putchar((message[i] - 'A' + shift) % 26 + 'A');
		}else{
			putchar(message[i]);
		}

		letter_count--;
		i++;
	}

	printf("\n");	

	return 0;
}
