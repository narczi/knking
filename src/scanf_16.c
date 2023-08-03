#include <stdio.h>
#include <stdlib.h>

int main(){

	int _1 ,_2 ,_3 ,_4 ,_5 ,_6 ,_7 ,_8 ,_9 ,_10 ,_11 ,_12 ,_13 ,_14 ,_15 ,_16;
	int row_1, row_2, row_3, row_4;
	int col_1, col_2, col_3, col_4;
	int diag_1, diag_2;

	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
&_1 ,&_2 ,&_3 ,&_4 ,&_5 ,&_6 ,&_7 ,&_8 ,&_9 ,&_10 ,&_11 ,&_12 ,&_13 ,&_14 ,&_15 ,&_16);

	row_1 = _1  + _2  + _3  + _4;
	row_2 = _5  + _6  + _7  + _8;
	row_3 = _9  + _10 + _11 + _12;
	row_4 = _13 + _14 + _15 + _16;

	col_1 = _1 + _5 +  _9 + _13;
	col_2 = _2 + _6 + _10 + _14;
	col_3 = _3 + _7 + _11 + _15;
	col_4 = _4 + _8 + _12 + _16;

	diag_1 = _1 + _6 + _11 + _16;
	diag_2 = _4 + _7 + _10 + _13;

	
	printf("%3d%3d%3d%3d\n%3d%3d%3d%3d\n%3d%3d%3d%3d\n%3d%3d%3d%3d\n", _1 ,_2 ,_3 ,_4 ,_5 ,_6 ,_7 ,_8 ,_9 ,_10 ,_11 ,_12 ,_13 ,_14 ,_15 ,_16);


	printf("Row sums: %d %d %d %d\n", row_1, row_2, row_3, row_4);
	printf("Column sums: %d %d %d %d\n", col_1, col_2, col_3, col_4);
	printf("Diagonal sums: %d %d\n", diag_1, diag_2);


	return 0;
}

// ten kod to tragedia, ale może właśnie taki ma być
