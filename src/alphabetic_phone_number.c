#include <stdio.h>

int main(){

	int c;
	int phone_number[15];
	int i = 0;

	printf("Enter phone number: ");

	

	while( (c = getchar()) != '\n'){
		if(c >= 'A' && c <= 'C'){
			phone_number[i] = '2';
		}else if(c >= 'D' && c <= 'F'){
			phone_number[i] = '3';
		}else if(c >= 'G' && c <= 'I'){
			phone_number[i] = '4';
		}else if(c >= 'J' && c <= 'L'){
			phone_number[i] = '5';
		}else if(c >= 'M' && c <= 'O'){
			phone_number[i] = '6';
		}else if(c >= 'P' && c <= 'S'){
			phone_number[i] = '7';
		}else if(c >= 'T' && c <= 'V'){
			phone_number[i] = '8';
		}else if(c >= 'W' && c <= 'Z'){
			phone_number[i] = '9';
		}else{
			phone_number[i] = c;
		}
		i++;
	}

	phone_number[i] = '!';

	i = 0;

	printf("In numeric form: ");
	while(phone_number[i] != '!'){
		putchar(phone_number[i]);
		i++;
	}

	printf("\n");



	return 0;
}
