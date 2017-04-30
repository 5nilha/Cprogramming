#include <stdio.h>
#include <stdlib.h>


int main () {
	
	int number = 0;
	int i = 0;
	int factor = 0;
	int factorSum = 0;
	
	printf("Enter a positive integer: ");
	scanf("%d", &number);
	
	for (i = 2; i <= number; i++){
		
		if (number % i == 0) {
			factor = number / i;
			printf("%d, ", factor);
		
			factorSum += factor;
		}
		
		
	}
		
	printf("\n\n");
	printf("%d", factorSum);
}