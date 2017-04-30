#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char userName[15];
	char confirmedUsername[15] = "catwoman";
	
	START:
	printf("Enter a username: ");
	scanf("%s", userName);

	if (strcmp(userName, confirmedUsername) != 0){
		printf("You entered a wrong username!\n");
		goto START;
	}	
	else {
		printf("Access Granted!\n");
	}
	
}