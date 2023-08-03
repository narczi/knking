#include <stdio.h>

int main(){

	int time_h, time_m; 
	char am_pm_1, am_pm_2 = 'm';
	printf("Enter time in 12-hour format: ");
	scanf("%d:%d %c%c", &time_h, &time_m, &am_pm_1, &am_pm_2);
	printf("Your time in 12-hour format: %.2d:%.2d %c%c\n", 
	time_h, time_m, am_pm_1, am_pm_2);

	if(am_pm_1 == 'p'){
		time_h = time_h + 12;
	}

	printf("Your time in 24-hour format: %.2d:%.2d %c%c\n", 
	time_h, time_m, am_pm_1, am_pm_2);
	

	return 0;
}
