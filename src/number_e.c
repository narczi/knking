#include <stdio.h>

int main(){

	float e;
	int n = 4;
	int silnia;
	int	silnia_suma = 1;
	int e_mianownik = 0;

	while(n > 0){
		silnia = n;
		while(silnia > 0){
			silnia_suma = silnia_suma * silnia;			
			printf("silnia = %d, silnia_suma = %d\n", silnia, silnia_suma);
			silnia--;
		}
		printf("\n");
		
		n--;
		e_mianownik += silnia_suma;
		silnia_suma = 1;
	}

	printf("e mianownik = %d\n", e_mianownik);
	e = 2.0f + (1.0f / e_mianownik);

	printf("e = %.50f\n", e);

	printf("%.50f\n", 1.0f/33.0f);

	return 0;
}
