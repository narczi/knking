#include <stdio.h>

int main(){

	printf("\11%s\010\012", "a"); // \b

	printf("\x09%s\x09\x0a", "a"); // \b
	

	return 0;
}
