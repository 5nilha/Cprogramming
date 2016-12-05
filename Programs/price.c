#include <stdio.h>

int main() {
	
	double item1Price, item2Price, item3Price, totalOrder, totalWithTax, tax, amountTaxOrder;
	
	tax = 7.0 / 100;
	
	printf("\n\tEnter the price of the first item: " );
	scanf("%lf", &item1Price);
	
	printf("\tEnter the price of the second item: ");
	scanf("%lf", &item2Price);
	
	printf("\tEnter the price of the third item: ");
	scanf("%lf", &item3Price);
	
	totalOrder = item1Price + item2Price + item3Price;
	amountTaxOrder = tax * totalOrder;
	totalWithTax = amountTaxOrder + totalOrder;
	
	//Total of the order 
	printf("\n\tTotal without Tax: $%.2lf", totalOrder);
	printf("\n\tTax: $%.2lf", amountTaxOrder);
	printf("\n\tTotal with Tax: %.2lf \n\n", totalWithTax);
	
	//Appreciation statement
	printf("\tTHANKS FOR YOUR PURCHASE\n\n");
}