#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char word[15];
	char secondWord[15];
	
	printf("Insert a word: ");
	scanf("%s", word);
	
	printf("\n");
	
	for (int i = 0; i < strlen(word); i++){
		secondWord[i] = word[strlen(word) - 1 - i];
	}
		//
	// printf("%s", secondWord);
	
	if (strcmp(secondWord, word) == 0) {
		printf("%s is a palindrome\n", word);
	}
	else {
		printf("%s is not a palindrome\n", word);
	}
	
}

