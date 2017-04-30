#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mode(){
	
	
	int number;

	printf("\n\n");
	printf("============================================================================\n");
	printf("# 1 - Future Value  (Compounding)\n");
	printf("# 2 - Present Value (discounting) \n");
	printf("============================================================================\n");

	printf("Enter the number of the investment calculation: \n\n");
	scanf("%d", &number);

	return number;
}

void futureValue ( double initialAmount, double returnRate, int years) {

	double fv = 0;
	double rate = 1 + (returnRate /100);

	fv = initialAmount * pow(rate, years);

	printf("\n\n");
	printf("Future Value: $ %.2lf after %d years\n\n", fv, years);
}

void presentValue (double monthlyAmount, double returnRate, int years) {

	double pv = 0;
	double rate = 1 + (returnRate /100);
	int i = 1;

	while (i <= years ){
		pv = pv + (monthlyAmount / pow(rate, i));
		i++;
	}

	printf("\n\n");
	printf("Present Value: $ %.2lf\n\n", pv);
}



int main() {

	char answer = 'y';
	double rate;
	int years;
	int calculationMode;

	while (answer != 'n'){

		calculationMode = mode();

		if (calculationMode == 1) {
			double initial;

			printf("Enter the initial amount: ");
			scanf("%lf", &initial);

			printf("Enter the annual return rate: ");
			scanf("%lf", &rate);

			printf("Enter investment time: ");
			scanf("%d", &years);

			futureValue(initial, rate, years);
		}

		else if (calculationMode == 2){
			double monthlyAmount;

			printf("Enter the monthly amount: ");
			scanf("%lf", &monthlyAmount);

			printf("Enter the annual return rate: ");
			scanf("%lf", &rate);

			printf("Enter investment time: ");
			scanf("%d", &years);

			presentValue (monthlyAmount, rate, years);
		}

		else {
			printf("You entered a wrong number\n");
		}

		printf("Want to continue? (y | n): ");
		scanf("%c", &answer);
		printf("\n\n");

	}


}