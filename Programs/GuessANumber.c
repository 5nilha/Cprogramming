#include <time.h>
#include <stdio.h>

int main(){

	int guess, secret;
	
	secret = srand(time(NULL));
	secret = rand() % 1000 + 1;
	
	printf("Guess the secret number: ");
	start:
	scanf("%i", &guess);
	
	while (guess != secret) {
		if (guess > secret) {
			printf("To High!\n\n");
			printf("Guess again!\n\n");
			goto start;
		} else if (guess < secret) {
			printf("Too Low!\n\n");
			printf("Guess again!\n\n");
			goto start;
		} 
	}
	printf("Congratulation you guessed the rigght number!");
	printf("The guessed number is %i\n\n", guess);

	
}