#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
	
	char greet [10] = "Hello ";
	char name [15] = " ";
	
	printf("Enter a name: ");
	char newName[15];
	scanf("%s", newName);
	
	strcpy(name, newName);
	
	printf("\n%s %s!\n", greet, name);
}