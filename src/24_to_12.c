#include <stdio.h>

int main(){


	int hours, minutes;
	
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);	

	char *s = hours > 12 ? "PM" : "AM";
	printf("Equivalent 12-hour time: %d:%.2d ", hours % 12, minutes);
	printf("%s", s);
	printf("\n");

	return 0;
}
