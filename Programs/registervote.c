#include<stdio.h>

int main() {
	
	int age;
	char answer;
	
	printf("Please enter your age: ");
	scanf("%i", &age);
	
	printf("You are %i years old. \n\n", age);
	
	back:
	if (age >= 18){
		
		printf("Are you registered to vote? (y / n) \n");
		scanf("%c", &answer);
		
		if (answer == 'Y'|| answer == 'y'){
			printf("Thanks for contribute with our Country! \n\n");
		}
		else if (answer == 'n' || answer == 'N'){
			printf("\nVoting is important to our Country, so register today, and contribute to the future of our country. \n\n ");
			
		}
		else {
			printf("You didn't type an aceptable answer.\n\n");
			goto back;
		}
	}
}