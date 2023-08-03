#include <stdio.h>

// 166 - dopuszczalna ilość cali przestrzennych na funt
// objętość należy podzielić przez 166 i wtedy otrzymamy dimensional weight
// jeśli dimensional weight jest większe od faktycznej wagi to cena 
// liczona jest właśnie na podstawie dimensional weight

// dzieląc przez siebie dwie liczby całkowite dochodzi do utraty danych po przecinku
// np. dzieląc 960 na 166 otrzymamy 5 zamiast 5,783

// jednym ze sposobów na poradzenie sobie z tym jest dodanie 166 do dzielnej

#define INCHES_PER_POUND 166

int main(){

	int	height, length, width;// 8, 12, 10
	printf("Height: ");
	scanf("%d", &height);
	printf("Length: ");
	scanf("%d", &length);
	printf("Width: ");
	scanf("%d", &width);
	int volume  = height * length * width;
	int dim_weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

	printf("volume = %d\n", volume);
	printf("dimensional weight = %d / 166 = %d\n", volume, dim_weight);
	

	return 0;
}
