#include<stdio.h>
#include <unistd.h>

int main() {
	//char name [256];
	char name [20];
	char start;
	char answer;
	int score;

	for (int i = 0; i < 80; i++){
		printf("#");
	}
	printf("\n\n");
	printf("TYPE YOUR NAME: ");
	scanf("%s", &name);
	printf("\n\nWELCOME %s!!! PLEASE READ THE INSTRUCTION OF THE TEST BELLOW.\n\n", name);

	
	printf("!!!!THE TEST HAS THREE LEVELS. TO GO TO THE NEXT LEVEL IS NECESSARY AT LEAST A GRADE B. THE TEST HAS MULTIPLE CHOICE ANSWERS, SO TO ANSWER THE QUESTIONS, CHOOSE THE LETTER OF THE RESULT YOU THINK IS THE RIGHT ANSWER. YOU ARE NOT ALLOWED TO USE A CALCULATOR.\n\n");
	printf("\t=========================\n");
	printf("\t90 - 100 = A \n\t 80 - 89 = B\n\t 70 - 79 = C\n\n");
	printf("\t=========================\n\n");
	
	back:

	printf("ARE YOU READY TO START NOW? (Y) or (N)\n");
	scanf("%s", &start);
	
		if (start == 'Y' || start == 'y'){
			goto problem1;
			
		} else {
			printf("\nSO GET READY TO START! I WILL GIVE YOU 15 SECONDS TO GET READY.\n\n");
			
			int start = 15;
			    while (!(start < 16));

			    do
			    {
			        printf(" %d\n",start);
			        start--;
					sleep(1);
				  
			    }
			    while( start > 0);

			    printf("ZERO!\n\nTIME TO START NOW!\n\n");
				sleep(3);
			    goto problem1;
			
		}
	
	
	problem1:
	printf("\n\n\tLEVEL 1\n\n");
		printf("PROBLEM 1: \n\nTom bought 6 packs of red bouncy balls, 5 packs of yellow bouncy balls, and 10 packs of green bouncy balls. There were 6 bouncy balls in each package. How many bouncy balls did Tom buy in all?\n");
		printf("\tA) 13\n\tB) 14\n\tC) 10\n\tD) 16\n\n");
		printf("\t- The answer is: ");
		scanf("%s", &answer);
			
			if (answer == 'b' || answer == 'B') {
				score += 1;
				printf("\n\nCorrect Answer! You Score %i point(s)\n\n\n", score);
				goto problem2;
			} else{
				printf("\n\nWrong Answer!\n\n\n");
				goto problem2;
		}
		
		
	problem2:
		    printf("PROBLEM 2: \n\nWhat is the result of the equation [(4 + 5)* 2]+[(6 * 5 / 2 + 1)]?\n\n ");
		    printf("\tA) 28\n\tB) 33\n\tC) 24\n\tD) 34\n\n");
			printf("\t- The answer is: ");
		    scanf("%s", &answer);
			
		    if (answer == 'd' || answer == 'D') {
				score += 1;
		        printf("\n\nCorrect Answer! You Score %i point(s)\n\n\n", score);
		        goto problem3;
		    } else{
		        printf("\n\nWrong Answer!\n\n\n");
		        goto problem3;
		    }
    
	problem3:
		    printf("PROBLEM 3: New Problem \n\n");
		    printf("%s Total Score is: %i\n", name, score);
}