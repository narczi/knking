#include <stdio.h>
#include <ctype.h>

#define SIZE(x) ( sizeof(x) / sizeof(x[0]) )

float compute_GPA(char grades[], int n)
{
	float sum_average = 0;
	for(int i = 0; i < n; i++){
		if (grades[i] == 'A')
			sum_average += 4;
		else if (grades[i] == 'B')
			sum_average += 3;
		else if (grades[i] == 'C')
			sum_average += 2;
		else if (grades[i] == 'D')
			sum_average += 1;
		else if (grades[i] == 'F')
			sum_average += 0;
	}

	return sum_average / n;
}

int main(void)
{
	char grades[] = {'B', 'C', 'A', 'A', 'A'};

	printf("%g\n", compute_GPA(grades, SIZE(grades)));

	return 0;
}
