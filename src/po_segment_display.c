#include <stdio.h>
// Chapter 10. Exercise 7.

#define MAX_DIGITS 10
#define POS_OFFSET 4

const int segments[10][7] = {		
	{1, 1, 1, 1, 1, 1, 0}, 		//0
	{[1] = 1, 	 [2] = 1}, 		//1
	{1, 1, 0, 1, 1, 0, 1},		//2
	{1, 1, 1, 1, 0, 0, 1},		//3
	{0, 1, 1, 0, 0, 1, 1},		//4
	{1, 0, 1, 1, 0, 1, 1},		//5
	{1, 0, 1, 1, 1, 1, 1},		//6
	{1, 1, 1},					//7
	{1, 1, 1, 1, 1, 1, 1},		//8
	{1, 1, 1, 1, 0, 1, 1}		//9
	};

char digits[4][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(){
	int ch;
	int dig_pos = 0;
	clear_digits_array();
	while ((ch = getchar()) != '\n'){
		process_digit(ch-'0', dig_pos);
		if (ch >= '0' && ch <= '9')
			dig_pos += POS_OFFSET;
	}
	
	print_digits_array();
	
	return 0;
}

void clear_digits_array(void)
{
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < MAX_DIGITS * 4; j++){
			digits[i][j] = ' ';
		}
	}
}
void process_digit(int digit, int position)
{
	if (segments[digit][0] == 1) digits[0][position+1] = '_';
	if (segments[digit][1] == 1) digits[1][position+2] = '|';
	if (segments[digit][2] == 1) digits[2][position+2] = '|';
	if (segments[digit][3] == 1) digits[2][position+1] = '_';
	if (segments[digit][4] == 1) digits[2][position]   = '|';
	if (segments[digit][5] == 1) digits[1][position]   = '|';
	if (segments[digit][6] == 1) digits[1][position+1] = '_';
}
void print_digits_array(void)
{
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < MAX_DIGITS * 4; j++){
			printf("%c", digits[i][j]);
		}
		printf("\n");
	}
}
