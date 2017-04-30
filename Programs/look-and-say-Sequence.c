#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	char inputNumber[1000];
	int tempCount = 0;
	int count = 1;
	
	printf("Enter a positice integer: ");
	scanf("%s", inputNumber);

	count = 1;
	for (int i = 0; i < strlen(inputNumber); i++) {

			if (inputNumber[i] == inputNumber[i + 1]) {
				count += 1;
				continue;
				
			}
			printf("%d%c", count, inputNumber[i]);
			if (inputNumber[i] != inputNumber[i + 1]) {

				count = 1;
			}
			
	}
	
	printf("\n\n");

}