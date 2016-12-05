#include <stdio.h>

int main (){
	
	int number = 1, sum = 0;
	
	while (number <= 100){
		printf(" %i |", number);
		sum = sum + number;
		number = number + 1;
	}
	
	printf("\n\nThe Sum of all number between 1 and 100 is: %i\n\n", sum);
}