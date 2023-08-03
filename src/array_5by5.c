#include <stdio.h>

#define ROW 5
#define COL 5

int main(void){

	int numbers[ROW][COL] = {0};

	int row, col;
	int row_total = 0;
	int col_total = 0;

	// wczytywanie liczb
	for(row = 0; row < ROW; row++){
//		printf("Enter row %d: ", row + 1);
		for(col = 0; col < COL; col++){
			scanf("%d", &numbers[row][col]);

		}
	}

//	printf("\n");

	// drukowanie wczytanych liczb
	for(row = 0; row < ROW; row++){
		row_total += numbers[row][col];
		for(col = 0; col < COL; col++){
			printf("%2d ", numbers[row][col]);
			col_total += numbers[row][col];
		}
		printf("\n");
	}

	// sumowanie wierszy
	row_total = 0;
	printf("Row totals:    ");
	for(row = 0; row < ROW; row++){
		for(col = 0; col < COL; col++){
			row_total += numbers[row][col];	
		}
		printf("%d ", row_total);
		row_total = 0;
	}
		printf("\n");

	// sumowanie kolumn
	col_total = 0;
	printf("Column totals: ");
	for(col = 0; col < COL; col++){
		for(row = 0; row < ROW; row++){
			col_total += numbers[row][col];	
		}
		printf("%d ", col_total);
		col_total = 0;
	}
		printf("\n");


	return 0;
}
