#include <stdio.h>

int main(){

	int a[] = {4, 9, 1, 8, [0] = 5, 7}; //po napotkaniu desygnowanego inicjalizatora liczenie dalej następuje od niego, czyli liczba 7 dotyczy elementu 1

	for(int i = 0; i < 4; i++){
		printf("%d ", a[i]);
	}

	return 0;
}
