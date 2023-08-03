#include <stdio.h>

#define N 10

int main(){

	int a[N];
	int sum = 0;

	for(int i=0; i<10; i++){ // zerowanie tablicy
		a[i] = 0;
	}

	for(int i=0; i<10; i++){ // wczytywanie liczb
		scanf("%d", &a[i]);
	}

	for(int i=0; i<10; i++){ // sumowanie elementów
		sum += a[i];
	}

	for(int i=0; i<10; i++){ // drukowanie tablicy
		printf("%d ", a[i]);
	}

	

	printf("Sum is %d\n", sum);

	

	return 0;
}
