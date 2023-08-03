#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MONTH 30
#define DAY 24

int main(){

	double temperature_readings[MONTH][DAY] = {0};
	int num;
	double avg_temp = 0;

	srand( (unsigned) time(NULL));

	for(int i = 0; i < MONTH; i++){
		printf("%-5d", i+1);
		for(int j = 0; j < DAY; j++){
			temperature_readings[i][j] = rand() % 50;
			avg_temp += temperature_readings[i][j];
			printf("%2.0f ", j, temperature_readings[i][j]);
		}
		printf("\n");
	}

	printf("Average month temperature: %.2f\n", avg_temp / (MONTH * DAY));
	

	return 0;
}
