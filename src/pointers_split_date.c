#include <stdio.h>

#define MONTHS 12
int months[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void split_date(int day_of_year, int year, int *month, int *day)
{
	if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )
		months[1] += 1;

	int days_passed;
	int i;
	
	for(i = 0; days_passed < day_of_year; i++){
		days_passed += months[i];
	}
	days_passed -= months[--i];

	printf("Day of year: %d\n", day_of_year);
	printf("Days passed: %d\n", days_passed);

	*month = i+1;
	*day = day_of_year - days_passed;
}

int main(void)
{
	int day_of_year = 60;
	int year = 2003;
	int month, day;

	split_date(day_of_year, year, &month, &day);

	printf("%.4d/%.2d/%.2d\n", year, month, day);
	
}
