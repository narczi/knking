#include <stdio.h>

int main(){
	
	int i, n;
	
	i = 1;
	
	printf("Podaj ilość liczb do podniesienia do kwadratu: ");
	scanf("%d", &n);

	while(i <= n){

		printf("%10d%10d\n", i++, i * i);

	}
	
	return 0;
}
