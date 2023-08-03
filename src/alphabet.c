#include <stdio.h>

int main(){


	for(int i = 'A'; i <= 'Z'; i++){
		printf("%2c ", i);
	}

	for(int i = 'A'; i < 26; i++){
		printf("%2c ", i - 'A');
	}

	for(int i = 0; i < 26; i++){
		printf("%2d ", i);
	}

	for(int i = 'A'; i <= 'Z'; i++){
		printf("%2d ", i);
	}

	printf("\n");

	int letter_points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

	for(int i = 0; i < 26; i++){
		printf("%2d ", letter_points[i]);
	}

	printf("\n\n%d", letter_points['D' - 'A']);

	printf("\n");

	return 0;
}
