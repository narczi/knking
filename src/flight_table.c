// First seen:  Chapter 5.  - Selection Statements, Programming Project 8.
// Modified in: Chapter 11. - Pointers, 			Programming Project 2.
#include <stdio.h>

int departures_hr[8] = {8,  9,  11, 12, 14, 15, 19, 21};
int departures_m[8]  = {0,  43, 19, 47,  0, 45,  0, 45};

int arrivals_hr[8] = {10, 11, 13, 15, 16, 17, 21, 23};
int arrivals_m[8]  = {16, 52, 31,  0,  8, 55, 20, 58};

void print_flight_table(void);
void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);
int time_to_minutes(int hours, int minutes);
void minutes_to_time(int time_in_minutes, int *hours, int *minutes);
void print_closest_flight(int departure_hr, int departure_m, int arrival_hr, int arrival_m);

int main()
{
//	print_flight_table();

	int time_h, time_m, user_given_time;
	char am_pm_1, am_pm_2;	
	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c%c", &time_h, &time_m, &am_pm_1, &am_pm_2);

	if(am_pm_1 == 'p'){
		time_h = (time_h + 12) % 24;
	}

	printf("Your time in 24-hr format: %.2d:%.2d\n", time_h, time_m);


	user_given_time = time_to_minutes(time_h, time_m);

	int departure_time;
	int arrival_time;
	find_closest_flight(user_given_time, &departure_time, &arrival_time);

	int closest_departure_hr;
	int closest_departure_m;
	int closest_arrival_hr;
	int closest_arrival_m;

	minutes_to_time(departure_time, &closest_departure_hr, &closest_departure_m);
	minutes_to_time(arrival_time,   &closest_arrival_hr,   &closest_arrival_m);

	printf("Closest departure time: %.2d:%.2d\n", closest_departure_hr, closest_departure_m);
	printf("Closest arrival time: %.2d:%.2d\n", closest_arrival_hr, closest_arrival_m);

	return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
int departure_time_temp = desired_time - time_to_minutes(departures_hr[0],departures_m[0]);
*arrival_time 	= desired_time - time_to_minutes(arrivals_hr[0], arrivals_m[0]);

	int new_time;

	for(int i = 1; i < 8; i++)
	{
	new_time = desired_time - time_to_minutes(departures_hr[i],departures_m[i]);
		
		if(new_time < 0)
		{
			new_time *= -1;
		}

		if(new_time < departure_time_temp) // w tej chwili dla każdego czasu jest true :/
		{
			departure_time_temp = new_time;
			*departure_time = time_to_minutes(departures_hr[i], departures_m[i]);
			*arrival_time 	= time_to_minutes(arrivals_hr[i], arrivals_m[i]);
		}
	}
}

void print_flight_table(void)
{
	printf("Departures:\t\tArrivals:\n");
	for(int i = 0; i < 8; i++){
		printf("%.2d:%.2d\t\t        %.2d:%.2d\n", 
		departures_hr[i], departures_m[i], arrivals_hr[i], arrivals_m[i]);
	}
}

int time_to_minutes(int hours, int minutes)
{
	int time_in_minutes = hours * 60 + minutes; // total time in minutes
	return time_in_minutes;
}
void minutes_to_time(int time_in_minutes, int *hours, int *minutes)
{
	*hours = time_in_minutes / 60;
	*minutes = time_in_minutes - *hours * 60;
}

void print_closest_flight(int departure_hr, int departure_m, int arrival_hr, int arrival_m)
{
	printf("Closest departure time is: %.2d:%.2d, ", departure_hr, departure_m);
	printf("arriving at: %.2d:%.2d\n", arrival_hr, arrival_m);	
}
