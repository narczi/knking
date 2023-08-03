#include <stdio.h>

int main(){

	int item_n; 
	float unit_price;
	int m, d, y;

	printf("Enter item number: ");
	scanf("%d", &item_n);

	printf("Enter unit price: ");
	scanf("%f", &unit_price);
	
	printf("Enter purchase date: ");
	scanf("%d/%d/%d", &m, &d, &y);

	printf("Item no.\tUnit Price\t\tPurchase date\n");
	printf("%d\t\t$%-7.2f\t\t%2.2d/%2.2d/%4.4d\n", item_n, unit_price, d, m, y);


	return 0;
}
