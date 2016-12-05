#include <stdio.h>

	int main(){
	
		int speed, noTicket = 0, smallTicket = 1, bigTicket= 2; 
		char birthday;
		
		printf("\nInsert your speed: ");
		scanf("%i", &speed);
		
		printf("\nIs today your bithday? (Y - Yes or N - No)   ");
		scanf("%s", &birthday);
		
		if (birthday == 'y' || birthday == 'Y'){
			
			speed = speed;
			
		} else {
			speed += 5; 
		}
		
			if (speed <= 60){
				printf("\n\nYour Ticket is %i\n\n", noTicket);
			} else if (speed > 60 && speed <= 80) {
				printf("\n\nYour Ticket is: %i\n\n", smallTicket);
			} else if (speed > 80) {
			printf("\n\nYour ticket is: %i\n\n", bigTicket);
		}
		
}