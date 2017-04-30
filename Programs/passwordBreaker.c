#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	char answer = 'y';
	
	while (answer == 'y') {
	
		char password[30];
		char tries[300];
		int i = 0;
		int j = 0;
		int k = 0;
		int count = 0;
		char alphaNumeric = 'a';

	
			printf("Enter a password: ");
			scanf("%s", password);
	
	/*------ The program with scan the the password to see how long it takes to break the password -------*/
	
			tries[0] = alphaNumeric;


			while ( strcmp(tries, password) != 0 ) {

				if ( tries[i] == password[j] ) {
					count++;
				}

				else {
				
					while ( tries[i] != password[j] ) {
					
						alphaNumeric++;
						tries[i] = alphaNumeric;
						count++;
					}
				
					printf("ALERT: char at %i matches\n", j);
				}
				i++;
				j++;

			}

			printf("\n");
			printf("===================================================================================================\n");
			printf("THE PASSWORD IS: %s\n", tries);
			printf("%d TRIES TO BREAK THE PASSWORD\n", count);
			printf("===================================================================================================\n");
	
			printf("Do you want to try again? (y | n)");
			scanf("%s", &answer);
			
	}
	
}