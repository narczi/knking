#include <stdio.h>

int main(){

	int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;
	int first_sum, second_sum, total;

	printf("Enter the first 12 digits of an EAN:");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
	&i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

	first_sum  = i2 + i4 + i6 + i8 + i12;
	second_sum = i1 + i3 + i5 + i7 + i9 + i11;
	total = 3 * first_sum + second_sum;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));
//	printf("Check digit (alt): %d\n", (10 - (total % 10)) % 10);

	return 0;

}

//UPC
//Jif Creamy Peanut Butter (18 oz.) 	0 51500 24128 ? = 8
//Ocean Spray Jellied Sauce (8 oz.) 	0 31200 01005 ? = 6

//EAN
//Turkish Delight Pistachio & Coconut	8691 4842 6000 8

