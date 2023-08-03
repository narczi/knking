#include <stdio.h>

int main(){

	int ch;
	int prev_ch = 'a';
	
	float num;
	float previous_num;
	float total = 0;

//	float frac_part = f - (int) f;

	while( (ch = getchar()) != EOF){
		if(ch >= '0' && ch <= '9' && prev_ch == '.'){
			num = (ch - '0');
			printf("if: %.2f\n", num);
		}else if(ch >= '0' && ch <= '9'){
			num = ch - '0';
			printf("else if: %.2f\n", num);
		}
	
		prev_ch = ch;
	}

	return 0;
}
