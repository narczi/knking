#include <stdio.h>
#include <stdlib.h>

// malloc zwraca void pointer do zarezerwowanej pamięci

int* twoSum(int* returnSize){
	int *ret_indices = malloc(sizeof(int) * 2);
	ret_indices[0] = 12;
	ret_indices[1] = 56;

	//*returnSize = 2;

	return ret_indices;
}

int main(){

	int *p = malloc(sizeof(int) * 5);

	*p = 12;

	for (int i = 0; i < 5; i++){
		p[i] = i * 5;
	}

	for (int i = 0; i < 5; i++){
		printf("%d, ", p[i]);
	}


	free(p);

	int tab[5] = {1,2,3,4,5};
	int *retSize;

	int *indices_n;
	int *tS = twoSum(indices_n);



	printf("\n%d\n", *tS);
	tS++;
	printf("\n%d\n", *tS);

	return 0;
}
