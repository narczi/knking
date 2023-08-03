#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Given an array of integers **nums** and an integer **target**, return indices of the two numbers such that they add up to **target**.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#define nelems(x)  (sizeof(x) / sizeof(x[0]))

void printArray(int *arr, size_t arr_size){
	for(int i=0; i<arr_size; i++){
		printf("%d, ", arr[i]);
	}
	printf("\n");
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){

	*returnSize = 2;
	int *ret_indices = malloc(sizeof(int) * 2);
	ret_indices[0] = 0;
	ret_indices[1] = 0;

	for(int i = 0; i < numsSize; i++){
		for(int j = i+1; j < numsSize; j++){
			if(nums[i]+nums[j] == target){
//				printf("%d + %d = %d\n", nums[i], nums[j], target); 
				ret_indices[0] = i;
				ret_indices[1] = j;

				return ret_indices;
			}
		}
	}

	return ret_indices;
}

int main(){

	int tablica[] = {2,6,11,15,7,1};
	//int tablica[] = {3,3};
	size_t tablica_n = nelems(tablica);
	int target = 9;

	int indices[] = {1,5};
	int *indices_n = malloc(sizeof(int));
	int *indices_found;
	indices_found = twoSum(tablica, tablica_n, target, indices_n);
	printArray(indices_found, *indices_n);


	return 0;
}


