#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define ALPHABET 26

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main()
{
	int letters1[ALPHABET] = {0};
	int letters2[ALPHABET] = {0};

	read_word(letters1);
	read_word(letters2);
	
	bool anagrams = equal_array(letters1, letters2);

	if(anagrams){
		printf("The words are anagrams\n");
	}else if(!anagrams){
		printf("The words are NOT anagrams\n");
	}

	return 0;
}

void read_word(int counts[26])
{
	int ch;
	printf("Enter first word: ");

	while((ch = getchar()) != '\n'){
		ch = toupper(ch);
		counts[ch - 'A']++;
	}
}

bool equal_array(int counts1[26], int counts2[26])
{
	bool anagrams = false;

	for(int i = 0; i < ALPHABET; i++){
		if(counts1[i] != counts2[i]){
			anagrams = false;
			break;
		}else{
			anagrams = true;
		}
	}

	return anagrams;
}
