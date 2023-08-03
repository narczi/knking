#include <stdio.h>

#define N 26

int main(){

	int letters[N] = {0};

	char ch = 'a';

	printf("%d\n", 'a' - 'a');
	printf("%d\n", 'b' - 'a');
	printf("%d\n", ch - 'a');

	for(int i = ch; i < ch + N; i++){
		printf("%d ", letters[i - 'a']);
	}

	printf("\n");
	

	return 0;
}
