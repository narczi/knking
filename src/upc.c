#include <stdio.h>

int main(){

	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
	int first_sum, second_sum, total;

	printf("Enter the first 11 digits of a UPC:");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, 
	&j1, &j2, &j3, &j4, &j5);

	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 +i3 + i5 +j2 +j4;
	total = 3 * first_sum + second_sum;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));
	printf("Check digit (alt): %d\n", (10 - (total % 10)) % 10);

	return 0;

}

//UPC
//Jif Creamy Peanut Butter (18 oz.) 	0 51500 24128 ? = 8
//Ocean Spray Jellied Sauce (8 oz.) 	0 31200 01005 ? = 6
