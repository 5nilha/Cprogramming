#include <stdio.h>
#include <stdlib.h>

int main() {
	int choice;
	
	printf("Enter a choice (0, 1, 2, 3): ");
	scanf("%i", &choice);
	printf("\nYou entered %i", choice);
	
	switch (choice) {
		case 0:
		printf("\n you entered choice 0\n");
		break;
		case 1:
		printf("\n you entered choice 1\n");
		break;
		default:
		printf("\n you did not enter 0 or 1!\n");
		break;
	}
}