#include <stdio.h>
#include <stdlib.h>

int main() {
	int number, factor, countFactors = 0;
	
	printf("Enter an Integer: ");
	scanf("%i", &number);
	
	for(factor = 1; factor <= number ; factor++) {
		if (number % factor == 0){
			countFactors++;
		}
	}
	printf("There are %i factors in %i.\n", countFactors, number);
	
	if (countFactors == 2){
		printf("%i is a prime number.\n", number);
	} else{
		printf("%i is not a prime number", number);
	}
	printf("\n\n");
}
	
	