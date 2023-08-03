#include <stdio.h>

int main(){

	int i = 1;

	while(i < 10){
//		i++;
		if ( i % 5 != 0){
			//printf("%d", i % 5 == 0);
			continue;
		}
		printf("%d ", i);
		i++;
	}
	

	return 0;
}
