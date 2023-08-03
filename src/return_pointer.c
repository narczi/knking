#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *returnSize){
	int *ret_pointer = malloc(sizeof(int));
	*ret_pointer = 12;

	*returnSize = 5;
	
	return ret_pointer;
}

int main(){

	int *returnSize = malloc(sizeof(int));
	int *sumTwoResult = twoSum(returnSize);


	printf("%d\n", *returnSize);
	printf("%d\n", *sumTwoResult);

	return 0;
}
