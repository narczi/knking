#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

#define N 10
#define ROW 10
#define COL 10

int row, col;
int next_move;
int loop_iterations = 0;

int start_pos_x = 5;
int start_pos_y = 5;
int current_pos_x;
int current_pos_y;

unsigned int usecs = 50000;  //fast
//unsigned int usecs = 600000; //slow

void print_array(int map[][COL]);
void generate_random_walk(int map[][COL]);

int main(void)
{
	srand((unsigned) time(NULL));
	
	int map[ROW][COL] = {0};

	// fill the map with dots
	for(row = 0; row < ROW; row++){
		for(col = 0; col < COL; col++){
			map[row][col] = '.';
		}
	}

	generate_random_walk(map);

	return 0;
}

void print_map(int map[][COL])
{
	for(int i = 0; i < 37; i++){
		printf("\n  ");
	}
	for(int i = 0; i < ROW; i++){
		printf("%d  ", i);
	}
	printf("\n");
	for(row = 0; row < ROW; row++){
		printf("%d ", row);
		for(col = 0; col < COL; col++){
			printf("%c  ", map[row][col]);
		}
		printf("\n");
	}
	printf("Next move: %d ", next_move);
	if(next_move == 0){
		printf("UP\n");
	}else if(next_move == 1){
		printf("RIGHT\n");
	}else if(next_move == 2){
		printf("DOWN\n");
	}else if(next_move == 3){
		printf("LEFT\n");
	}
	printf("Loop iterations: %d \n", loop_iterations);
	printf("Current pos (x, y): %d, %d\n", current_pos_x, current_pos_y);
	fflush(stdout);
	usleep(usecs);
}

void generate_random_walk(int map[][COL])
{
	current_pos_x = start_pos_x;
	current_pos_y = start_pos_y;

	map[start_pos_y][start_pos_x] = 'A';

	int ch = 'B';
	next_move = rand() % 4;


	while(ch <= 90 && (	(current_pos_x + 1 < N && (current_pos_x + 1) >= 0 && map[current_pos_y][current_pos_x + 1] == '.') ||
						(current_pos_y + 1 < N && (current_pos_y + 1) >= 0 && map[current_pos_y + 1][current_pos_x] == '.') ||
						(current_pos_x - 1 < N && (current_pos_x - 1) >= 0 && map[current_pos_y][current_pos_x - 1] == '.') ||
						(current_pos_y - 1 < N && (current_pos_y - 1) >= 0 && map[current_pos_y - 1][current_pos_x] == '.')
					  )){
		
		switch(next_move) {
			case 0: //UP
				if((current_pos_y - 1) < N && (current_pos_y - 1) >= 0 && map[current_pos_y - 1][current_pos_x] == '.'){					
					printf("Expr: %d = %d < %d\n", (current_pos_y - 1) < (N-1), current_pos_y - 1, N-1);
					current_pos_y--;
					map[current_pos_y][current_pos_x] = ch;
					ch++;
					break;
				}else{
					break;
				}

			case 1: //RIGHT
				if((current_pos_x + 1) < N && (current_pos_x + 1) >= 0 && map[current_pos_y][current_pos_x + 1] == '.'){
					current_pos_x++;
					map[current_pos_y][current_pos_x] = ch;
					ch++;
					break;
				}else{
					break;
				}
			case 2: //DOWN
				if((current_pos_y + 1) < N && (current_pos_y + 1) >= 0 && map[current_pos_y + 1][current_pos_x] == '.'){
					current_pos_y++;
					map[current_pos_y][current_pos_x] = ch;
					ch++;
					break;
				}else{
					break;
				}

			case 3: //LEFT
				if((current_pos_x - 1) < N && (current_pos_x - 1) >= 0 && map[current_pos_y][current_pos_x - 1] == '.'){
					current_pos_x--;
					map[current_pos_y][current_pos_x] = ch;
					ch++;
					break;
				}else{
					break;
				}
		}
		
		next_move = rand() % 4;
		loop_iterations++;

		print_map(map);

	}
}
