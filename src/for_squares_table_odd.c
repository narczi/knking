#include <stdio.h>

int main(){
	
	int i, n, odd, square;
	
	i = 1;
	odd = 3;
	
	printf("Podaj ilość liczb do podniesienia do kwadratu: ");
	scanf("%d", &n);

	for (square = 1; i <= n; odd += 2){
		printf("%10d%10d\n", i, square);
		++i;
		square += odd;
	}

	

	
	return 0;
}
