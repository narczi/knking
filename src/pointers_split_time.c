// Chapter 11. Exercise 5.

#include <stdio.h>
#include <time.h>

void split_time(long total_sec, int *hr, int *min, int *sec)
{
	*hr  =  (total_sec / 3600) % 24;
	*min = ((total_sec - *hr * 3600) / 60) % 60;
	*sec =  (total_sec - *hr * 3600 - *min * 60) % 60;
}
int main(void)
{
	int total_seconds = time(NULL);
	int hours, minutes, seconds;

	split_time(total_seconds, &hours, &minutes, &seconds);

	printf("%.2d:%.2d:%.2d\n", hours, minutes, seconds);

	return 0;
}
