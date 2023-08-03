#include <stdio.h>
#include <ctype.h>

int main(){

	char c;
	short points = 0;

	int letter_points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

	printf("Enter a word: ");

	while( (c = getchar()) != '\n'){
		c = toupper(c);
		if(c == 'A' || c == 'E' || c == 'I' || c == 'L' || c == 'N' || c == 'O'){
			points = points + letter_points['A' - 'A'];
		}else if(c == 'R' || c == 'S' || c == 'T' || c == 'U'){
			points = points + letter_points['A' - 'A'];
		}else if(c == 'D' || c == 'G'){
			points = points + letter_points['D' - 'A'];
		}else if(c == 'B' || c == 'C' || c == 'M' || c == 'P'){
			points = points + letter_points['C' - 'A'];
		}else if(c == 'F' || c == 'H' || c == 'V' || c == 'W' || c == 'Y'){
			points = points + letter_points['F' - 'A'];
		}else if(c == 'K'){
			points = points + letter_points['K' - 'A'];
		}else if(c == 'J' || c == 'X'){
			points = points + letter_points['J' - 'A'];
		}else if(c == 'Q' || c == 'Z'){
			points = points + letter_points['Q' - 'A'];
		}
	}

	printf("Scrabble value: %d\n", points);

	return 0;
}
