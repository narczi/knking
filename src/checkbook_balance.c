#include <stdio.h>

int main(){

	int cmd;

	float credit, debit, balance = 0.0f;

	printf("== ACME Checkbook Balancing Software ==\n");
	printf("0. Clear\n1. Add Credit\n2. Deduct Debit\n3. Balance\n4. Exit\n");

	for (;;){

		printf("Please issue a command: ");
		scanf("%d", &cmd);

		switch (cmd) {
			case 0:
				balance = 0.0f;
				printf("The account has been cleared");
				break;

			case 1:
				printf("Enter the amount of credit: ");
				scanf("%f", &credit);
				balance += credit;
				break;
			case 2:
				printf("Enter the amount of debit: ");
				scanf("%f", &debit);
				balance -= debit;
				break;
			case 3:
				printf("The current balance is: $%.2f\n", balance);
				break;
			case 4:
				return 0;
		}
	}



}
