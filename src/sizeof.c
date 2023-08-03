#include <stdio.h>

int main(){

	int a = 5;
	char c = 1;

	// Można używać go do stałych:
	printf("%ld bajty\n", sizeof 58);

	// Zmiennych:
	printf("%ld bajty\n", sizeof c);

	// Wyrażeń:
	printf("%ld bajty\n", sizeof(a + a));

	// Typów:
	printf("%ld bajty\n", sizeof(int));	

	// C89
	// Jego typem zwracanym jest typ size_t, ale najlepiej przerzutować go do ulonga
	printf("%ld bajty\n", (unsigned long) sizeof(int));	

	// C99
	// C99 ma dla size_t specjalny specyfikator konwersji
	printf("%zu bajty\n", sizeof(int));	

	return 0;
}
