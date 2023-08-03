#include <stdio.h>

#define ROW 8
#define COL 8

void pawns_setup(int cols, char chess_board[][cols]);
void print_board(int cols, char chess_board[][cols]);
int evaluate_position(char chess_board[ROW][COL]);

int main(void){

	char chess_board[ROW][COL] = {
		{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}, // 0
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, // 1
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, // 2
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, // 3
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, // 4
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, // 5
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, // 6
		{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}, // 7
	};

	pawns_setup(COL, chess_board);
	print_board(COL, chess_board);

	printf("%d\n", evaluate_position(chess_board));



	return 0;
}

void pawns_setup(int cols, char chess_board[][cols])
{
	int rows = cols;
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			if(i == 1){
				chess_board[i][j] = 'p';
			}else if(i == 6){
				chess_board[i][j] = 'P';
			}else if(i >= 2 && i <= 5 && (i+j) % 2 != 0){
				chess_board[i][j] = '.';				
			}else{

			}
		}
	}
}

void print_board(int cols, char chess_board[][cols])
{
	int rows = cols;
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			if(i <= 1){
				printf("%2c ", chess_board[i][j]);
			}else if(i >= 2 && i <= 5 && (i+j) % 2 != 0){
				printf("%2c ", chess_board[i][j]);				
			}else if (i >= 6) {
				printf("%2c ", chess_board[i][j]);
			}else{
				printf("   ");
			}
			
		}
		printf("\n");
	}
}

int evaluate_position(char chess_board[ROW][COL])
{
	int white_sum = 0;
	int black_sum = 0;

	for(int i = 0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++)
		{
			switch (chess_board[i][j])
			{
				case 'Q':
					white_sum += 9;
					break;
				case 'R':
					white_sum += 5;
					break;
				case 'B':
					white_sum += 3;
					break;
				case 'N':
					white_sum += 3;
					break;
				case 'P':
					white_sum += 1;
					break;
				case 'q':
					black_sum += 9;
					break;
				case 'r':
					black_sum += 5;
					break;
				case 'b':
					black_sum += 3;
					break;
				case 'n':
					black_sum += 3;
					break;
				case 'p':
					black_sum += 1;
					break;
			}
		}
	}

	return white_sum - black_sum;
}
