#include<stdio.h>

int main() {
	
	int age;
	
	printf("Enter you age: ");
	scanf("%i", &age);
	
	printf("\nYou are %i years old", age);
	
	if (age >= 18) {
		printf("\n\nYou can buy a cigarette. \n");
	}
	else if (age > 65) { 
		printf("\n\nMedicare!");
	}
	else {
		printf("\n\nYou cannot have a glass of wine! \n");
	}
}