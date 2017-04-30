#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	/* declaring a file variable */
	FILE* fp;
	char arrayTime[8];
	float temperature;
	int count = 0;
	char countTime[8];
	int i = 0;
		
	printf("Openning File\n\n");
	/* open the file to only read */
	fp = fopen("daily_temps.txt", "r");
	
	/* If the file does not exist, the message will be printed */	
	if (fp == NULL) {
		printf("File cannot be opened");
		return 1;
	}
	
	/* The loop iterate until the file does not end.  */
	while (!feof(fp)) {
		/* fscanf will scan the time into the arrayTime and the temperature into the variable temperature.  */
		fscanf(fp, "%s %f", arrayTime, &temperature);
		printf("%s %.2f\n", arrayTime, temperature);
		
		if ((temperature > 77.0) && (temperature < 88.0)) {
			count++;

			
		}
	}
	
	printf("Count has %d Temperature between 77.0 and 88.0", count);

	
	printf("\n");
	
}