#include <stdio.h>

int main(){
	
	int ch;
	int prev_ch;
	int ch_count = 0;
	int space_count = 0;
	float ch_avg = 0;

	while((ch = getchar()) != '\n'){
		while((ch = getchar()) == ' '){
			putchar(ch);
		}
	}

	ch_avg = (float) ch_count / space_count;

	printf("Number of characters: %d\n", ch_count);
	printf("Number of spaces: %d\n", space_count);
	printf("%f\n", ch_avg);

	return 0;
}
