#include<stdio.h>

int main() {
	
	int a, b, c;

	printf("Insert a sequence of Numbers: ");
	scanf("%i", &a);
	
	printf("\nThe new sequence now is: ");
	
	
	while (a > 0) {
		c = a % 10;
		printf("%i", c);
		a = a / 10;
	}
	printf("\n\n");
}