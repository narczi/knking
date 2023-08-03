#include <stdio.h>

#define TRUE  1
#define FALSE 0
#define BOOL int

int main()
{

	BOOL flag;

	flag = 0;

	if(flag == TRUE)
		printf("flaga\n");	

	if(flag == FALSE)
		printf("nie ma flagi\n");

	return 0;
}
