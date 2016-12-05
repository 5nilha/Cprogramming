#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

	int penalty, shoot, p1goals = 0, p1lost = 0, p2goals = 0, p2lost = 0, penaltyGoals = 0, count = 1;
	int totalp1goals = 0, totalp2goals = 0;
	char player1[30], player2[30];
	
	printf("Insert the player 1 name: ");
	scanf("%s", &player1);
	
	printf("insert the player 2 name: ");
	scanf("%s", &player2);


	printf("%s Vs %s\n\n", player1, player2);

	srand(time(NULL));
	
	printf("Take the shot (press 1 to shoot): \n\n");
	
	
	while (count <= 5) {
		
		//player 1
		printf("%s shoot", player1);
		scanf("%i", &shoot);
		penalty = rand() % 6;
		printf("%i Penalty: \n", count);
		
		if (penalty == 0 || penalty == 2){
			printf("GOOAAALLLLL\n\n");
			p1goals++;
		} else{
			printf("Out\n\n");
			p1lost++;
		}
		
		// Player 2
		printf("%s shoot", player2);
		scanf("%i", &shoot);
		penalty = rand() % 6;
		printf("%i Penalty: \n", count);
		
		if (penalty == 0 || penalty == 2){
			printf("GOOAAALLLLL\n\n");
			p2goals++;
		} else{
			printf("Out\n\n");
			p2lost++;
		}
		
		count++;
	}
	
	if (p1goals == p2goals){
		
		do {
			printf("%s shoot", player1);
			scanf("%i", &shoot);
			penalty = rand() % 6;
			printf("%i Penalty: \n", count);
		
			if (penalty == 0 || penalty == 2){
			printf("GOOAAALLLLL\n\n");
				p1goals++;
			} else{
				printf("Out\n\n");
				p1lost++;
			}
		
			// Player 2
			printf("%s shoot", player2);
			scanf("%i", &shoot);
			penalty = rand() % 6;
			printf("%i Penalty: \n", count);
		
			if (penalty == 0 || penalty == 2){
				printf("GOOAAALLLLL\n\n");
				p2goals++;
			} else{
				printf("Out\n\n");
				p2lost++;
			}
		
			count++;
			
		} while (p1goals == p2goals);	
	}
	
	totalp1goals += p1goals;
	totalp2goals += p2goals;
		
	if (totalp1goals > totalp2goals){
		
	printf("\n\n%s WON THE GAME AND IS THE BIGEST CHAMPION!!!!!\n\n", player1);
	} else {
		
	printf("%s WON THE GAME AND IS THE BIGEST CHAMPION!!!!!\n\n", player2);
	}	
	
	printf("RESULTS:\n");
	printf("%s: %i Goal(s) and %i Lost\n\n", player1, p1goals, p1lost);
	printf("%s: %i Goal(s) and %i Lost\n\n\n\n", player2, p2goals, p2lost);
}