# include <stdio.h>


int main() {
	
	double income, incomeTax, netIncome;
	
	printf("\nHOW MUCH MONEY DO YOU MADE LAST YEAR? US$ ");
	scanf("%lf", &income);
	
	if (income < 15000) {
		incomeTax = income * 0;
		netIncome = income - incomeTax;
	} else if (income >= 15000 && income < 25000) {
		incomeTax = income * 0.15;
		netIncome = (income - incomeTax);
	} else {
		incomeTax = income * 0.20;
		netIncome = income - incomeTax;
	}
	
	printf("INCOME EARNED LAST YEAR: US$ %.2lf\n", income);
	printf("AMOUNT OF TAX TO PAY: US$ %.2lf\n", incomeTax);
	printf("NET INCOME: US$ %.2lf\n\n", netIncome);
}