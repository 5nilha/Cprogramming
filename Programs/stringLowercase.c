#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main () {
	
	char uppercaseString[30] = "HELLO MY BUDDIE!";
	char lowercaseString[30];
	int i = 0;
	
	
	for (i = 0; i < strlen(uppercaseString); i++) {
		
		lowercaseString[i] = tolower(uppercaseString[i]);
		
	}
	
	
	printf("\n%s \n\n", lowercaseString);
}