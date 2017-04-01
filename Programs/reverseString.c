#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char name[25];
	char reversedName[25];
	
	printf("Insert your first name: ");
	scanf("%s", name);
	
	
	for (int i = 0; i < strlen(name); i++){
		reversedName[i] = name[strlen(name) - 1 - i];
	}

	printf("\n%s\n\n", reversedName);
}

//strlen(name) - 1 - i