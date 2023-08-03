#include <stdio.h>
#include <stdbool.h>

int main(){

	_Bool teenager;

	int age = 11;

/*	if (age >= 13)
		if(age <= 19)
			teenager = true;
		else 
			teenager = false;
	else if (age < 13)
		teenager = false;
*/

	teenager = age >= 13 && age <= 19;

		
	printf("%d\n", teenager);		
	

	

	return 0;
}
