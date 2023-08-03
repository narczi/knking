#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
	srand((unsigned) time(NULL));

	int wins = 0;
	int loses = 0;
	bool result = false;
	char ch;

	roll_dice();

	do {
		result = play_game();

		if(result){
			wins++;
		}else if(!result){
			loses++;
		}

		printf("Play again? ");
		
		scanf("%c%*c", &ch);
		//printf("symbol read = %d\n", ch);
	}
	while(ch == 'y');

	printf("\n");

	printf("Wins: %d Loses: %d\n", wins, loses);

	return 0;
}

int roll_dice(void)
{
	// generate 2 random numbers and return their sum
	int dices[2] = {0};

	for(int i = 0; i < 2; i++){
		dices[i] = rand() % 6 + 1;
	}

	return dices[0] + dices[1];
}

bool play_game(void)
{
	// play one craps game
	// call roll_dice
	// player wins if he rolls 11 or 7 on the first roll
	// player loses if he rolls 2, 3 or 12
	// any other roll is called the "point" and the game continues
	// now player's task is to roll the "point" again at which point he wins
	// he loses if he rolls 7
	
	bool game_result = false;
	int dice_roll;
	int the_point;

	dice_roll = roll_dice();
	printf("You rolled: %d\n", dice_roll);

	if (dice_roll == 11 || dice_roll == 7){
		printf("You Win!\n\n");
		game_result = true;
		return game_result; 
	}else if (dice_roll == 2 || dice_roll == 3 || dice_roll == 12){
		printf("You Lose!\n\n");
		game_result = false;
		return game_result; 		
	}

	the_point = dice_roll;
	printf("Your point is: %d\n", the_point);

	while(1)
	{
		dice_roll = roll_dice();
		printf("You rolled: %d\n", dice_roll);
		if (dice_roll == the_point){
			printf("You Win!\n\n");
			game_result = true;
			return game_result; 
		}else if (dice_roll == 7){
			printf("You Lose!\n\n");
			game_result = false;
			return game_result; 		
		}
	}

}
