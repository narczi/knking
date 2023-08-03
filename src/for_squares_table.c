#include <stdio.h>

int main(){
	
	int i, n;
	
	i = 1;

	int limit_i = 2147483647;

	int c;
	
	printf("Podaj ilość liczb do podniesienia do kwadratu:");
	scanf("%d", &n);
	getchar();

	for (long i = 1; i <= n; i++){
		printf("%15ld%15ld\n", i, i * i);
		if(i % 24 == 0){
			printf("Press Enter to continue...");
			getchar();
		}
	}


	


	
	return 0;
}
