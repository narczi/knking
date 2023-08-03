#include <stdio.h>

#define ROW 8
#define COL 8

int main(void){

	char checker_board[ROW][COL];

	for(int i = 0; i < ROW; i++){
		for(int j = 0; j < COL; j++){
			if( (i + j) % 2 == 0){
				checker_board[i][j] = 'B';
			}else{
				checker_board[i][j] = ' ';				
			}
			printf("%2c", checker_board[i][j]);
		}
		printf("\n");
	}

	return 0;
}
