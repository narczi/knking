#include <stdio.h>

int main(){

	int i, command;
	
	printf("Enter an integer: ");
	scanf("%d", &i);
	printf("Enter a command: ");
	command = getchar(); 
	//getchar nawet nie daje nam wpisać znaku tylko od razu pobiera 
	//newline, który jest pozostałością po scanfie

	printf("%c", command);

	return 0;
}
