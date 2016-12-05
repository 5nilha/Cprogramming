#include <stdio.h>

	int main() {
	int a, b, sum, subtraction;
	
	printf("Insert the first integer: ");
	scanf("%i", &a);
	
	printf("Insert the second integer: ");
	scanf("%i", &b);
	
	sum = a + b;
	subtraction = a - b;
	
	if (a == 6 || b == 6 || sum == 6 || subtraction == 6){
		printf("\n\nTrue\n\n");
	}
	else{
		printf("\n\nFalse\n\n");
	
	}
}