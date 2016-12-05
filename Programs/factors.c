#include <stdio.h>
#include <stdlib.h>

int main() {
	int number, factor;
	
	printf("Enter an Integer: ");
	scanf("%i", &number);
	
	for(factor = 1; factor <= number ; factor++) {
		if (number % factor == 0){
			printf("%i ", factor);
		}
	}
	printf("\n\n");
}
	
	