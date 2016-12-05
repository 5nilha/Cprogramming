#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	
	int roll, wins = 0, losses = 0, board = 0, count;
	
	srand(time(NULL));
	
		printf("%i \n", roll);
	
	for (count = 0; count < 10000; count++) {
		roll = rand() % 6 + 1 + rand() % 6 + 1; // random number mod 6 plus 1. Will return 1-6
			// then add it again return 1-12
	
		if (roll == 7 || roll == 11) { // the first rool, if 7 or 11 you will win.
			wins++;
	
		} else if (roll == 2 || roll == 3 ||  roll == 12) { //  the first rool, if 2, 3, 12 you lose.
			losses++;

		} else {
			board = roll;
			roll = rand() % 6 + 1 + rand() % 6 + 1;
		
			while (board != roll && roll != 7) {
				roll = rand() % 6 + 1 + rand() % 6 + 1;
				if (roll == 7) {
					losses++;
		
				} else {
					wins++;
				}
			}
		}
	}
	printf("You wins this many times: %i \n", wins);
} 