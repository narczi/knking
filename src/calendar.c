#include <stdio.h>

int main(){
	
	int days, start_day;
	days = 31;
	start_day = 3;

/*	printf("Enter number of days in month: ");
	scanf("%d", &days);

	printf("Enter starting day of the week (1=Mon, 7=Sun): ");
	scanf("%d", &start_day);
*/

	printf("  M  T  W  T  F  S  S\n");

	for (int i = 1; i <= days; i++){
		printf("%3d", i);
		if(i < 8 - start_day){
			if(i % (8 - start_day) == 0)
				printf("\n");
		}else{
			if(i % (8 - start_day + 2) == 0)
				printf("\n");			
		}

	}

	printf("\n");

	

	return 0;
}
