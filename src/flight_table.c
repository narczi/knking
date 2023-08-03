#include <stdio.h>

int main(){

	int dep_h[8] = {8,  9,  11, 12, 14, 15, 19, 21};
	int dep_m[8] = {0,  43, 19, 47,  0, 45,  0, 45};

	int arr_h[8] = {10, 11, 13, 15, 16, 17, 21, 23};
	int arr_m[8] = {16, 52, 31,  0,  8, 55, 20, 58};

	int time_h, time_m, user_time;
	char am_pm_1, am_pm_2;

	printf("Departure time:\t\tArrival time:\n");

	for(int i = 0; i < 8; i++){
		printf("%.2d:%.2d\t\t        %.2d:%.2d\n", 
		dep_h[i], dep_m[i], arr_h[i], arr_m[i]);
	}
	
	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c%c", &time_h, &time_m, &am_pm_1, &am_pm_2);

	if(am_pm_1 == 'p'){
		time_h = (time_h + 12) % 24;
	}

	printf("Your time in 24-hr format: %.2d:%.2d %c%c\n", time_h, time_m, am_pm_1, am_pm_2);


	

	user_time = time_h * 60 + time_m; // total user time in minutes
	
	int smallest_time = user_time - (dep_h[0] * 60 + dep_m[0]);	
	int new_time;
	int smallest_h, smallest_m;
	int smallest_arr_h, smallest_arr_m;

	smallest_h = dep_h[0];
	smallest_m = dep_m[0];
	smallest_arr_h = arr_h[0];
	smallest_arr_m = arr_m[0];

	for(int i = 1; i < 8; i++){
		new_time = user_time - (dep_h[i] * 60 + dep_m[i]);
		if(new_time < 0){
			new_time *= -1;
		}
		if(new_time < smallest_time){
			smallest_time = new_time;
			smallest_h = dep_h[i];
			smallest_m = dep_m[i];
			smallest_arr_h = arr_h[i];
			smallest_arr_m = arr_m[i];
		}
	}

	printf("Closest departure time is: %.2d:%.2d, ", smallest_h, smallest_m);
	printf("arriving at: %.2d:%.2d\n", smallest_arr_h, smallest_arr_m);

	return 0;
}
