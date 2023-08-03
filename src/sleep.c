#include <stdio.h>
#include <unistd.h>

int main(void){


	
	for(int i = 0; i < 10; i++){
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("%d ", i);

		fflush(stdout);
		usleep(usecs);
		//printf("%d ", sec);
	}

	printf("\n");


	return 0;
}
