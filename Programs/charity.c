#include <stdio.h>

int main() {
	
	double item1, item2, item3, amountTotalOrder, totalWithTax, tax, amountTaxOrder;
	
	tax = 7.5 / 100;
	
	printf("\n\n=================================================================\n\n");
	
	printf("\t\tCHILDREN NEED YOUR HELP\n");
	printf("Support us and we promise to keep vulnerable children safe\n\n");
	
	printf("\n\tEnter the price of the first item: " );
	scanf("%lf", &item1);
	printf("\t- You entered: $%.2lf\n", item1);
	
	printf("\tEnter the price of the second item: ");
	scanf("%lf", &item2);
	printf("\t- You entered: $%.2lf\n", item2);
	
	printf("\tEnter the price of the third item: ");
	scanf("%lf", &item3);
	printf("\t- You entered: $%.2lf\n", item3);
	
	amountTotalOrder = item1 + item2 + item3;
	amountTaxOrder = tax * amountTotalOrder;
	totalWithTax = amountTaxOrder + amountTotalOrder;
	
	//Total of the order 
	printf("\n\tThe total of your order is: $%.2lf", amountTotalOrder);
	printf("\n\tThe tax for your order is: $%.2lf", amountTaxOrder);
	printf("\n\tThe total with tax is: %.2lf \n\n", totalWithTax);
	
	//Appreciation statement
	printf("\tTHANKS FOR SUPPORTING THE UNICEF USA\n\n");
	printf("=================================================================\n\n");
}