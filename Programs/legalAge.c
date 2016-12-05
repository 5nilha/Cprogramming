# include <stdio.h>


int main() {
	
	int age;
	
	
	printf("\nHow old are you? ");
	scanf("%i", &age);
	
	printf("You are %i years old", age);
		
		if (age >= 21) {
			
			printf("\n\nYou can buy some beer!\n\n");
			
		} else{
			
			printf("\n\nYou are not old enough to buy a beer.\n");
			printf("You should have 21 years old to buy a beer\n\n");
		}
}