#include <stdio.h>

int main (){
	
	int number1, number2, sum = 0, multiple;
	
	printf("Insert the start number and the final number of the range of numbers to sum.\n\n");
	printf("INSERT A (LOWER NUMBER) = ");
	scanf("%i", &number1);
	printf("\n");
	printf("INSERT B (HIGHER NUMBER) = ");
	scanf("%i", &number2);
	printf("\n");
	printf("MULTIPLE OF : ");
	scanf("%i", &multiple);
	printf("\n");
	
	while (number1 <= number2){
		printf("%i | ", number1);
		sum = sum + number1;
		number1 = number1 + multiple;
	}
	
	printf("\n\nThe Sum of all number of the range is : %i\n\n", sum);
}