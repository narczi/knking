#include <stdio.h>

int main(){

	int i = 0;
	
	while(i < 10){
		start:
		if(i % 5 == 0){				
			printf("a");
			i++;
			goto start;
		}else{
			printf("%d ", i);
			i++;
		}
		

	}

	return 0;
}
