#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	char firstName [15];
	char lastName [15];
	char fullName[30];
	
	printf("Type your first name: ");
	scanf("%s", firstName);
	
	printf("Type your last name: ");
	scanf("%s", lastName);
	
	strcat(fullName, firstName);
	strcat(fullName, " ");
	strcat(fullName, lastName);
	
	printf("\nHello, %s!\n\n", fullName);
	
}