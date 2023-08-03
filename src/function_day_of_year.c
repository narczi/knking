#include <stdio.h>

int day_of_year(int day, int month, int year)
{
	int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int days_total = 0;
	int leap_year = 0;

	if (year % 4 == 0)
		leap_year = 1;

	for(int i = 0; i < month-1; i++){
		days_total += months[i];
	}

	if (month >= 2 && leap_year && day >= 29)
		return days_total + leap_year + day;
	else
		return days_total + day;

}

int main(void)
{

	int day = day_of_year(30,3,2012);

	printf("%d\n", day);
	
}
