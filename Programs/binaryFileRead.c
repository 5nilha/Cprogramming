#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <time.h>


typedef struct flightInformation {
	char FlightNum[7];
	char OriginAirportCode[5];
	char DestAirportCode[5];
	int Human_ReadDate;
	
} flightInfo;


int compareStructs (void *a, void *b){
	
	 flightInfo *dest1 = a;
	 flightInfo *dest2 = b;
	
	return strcmp(dest1->DestAirportCode, dest2->DestAirportCode);
}

	/*---- Counting the DestAirportCode ----*/ 
void countingDestination (flightInfo arr[], int size) {

	int count = 1;
	char currCode[5];
	char nextCode[5];
	strcpy(currCode, arr[0].DestAirportCode);
	int i = 1;

	while (i < size) {
		strcpy(nextCode, arr[i].DestAirportCode);

		if (strcmp(currCode, nextCode) == 0) {
			count++;
		}
		else {
			printf("* %4d flight(s) to %s\n", count, currCode);
			strcpy(currCode, nextCode);
			count = 1;
		}
		i++;
	}

}



int main() {
	int count = 0;
	int i = 0;
	flightInfo flightData[2800]; /* creates 2800 structs */

	FILE *fp;
	FILE *outputFile;
	
	time_t currentTime;
	struct tm* loctime;
	
	
	
	/*---- read a binary file. ---- */ 
	fp  = fopen("acars.bin", "rb");
	outputFile = fopen("FlightInformation.txt", "w+");

		if (fp == NULL) {
			printf("Cannot open the file\n");
			return 1;
		}

		else {

			/*-----feof() is a function called file end of file.----*/
			while (!feof(fp)) {

				fread(&flightData[i], sizeof(flightInfo), 1, fp);
			
				i++;
			
				count += 1;
			}

			printf ("%d Flight Information\n\n", count);
			
			/*---- sort the array flightData ----*/ 
			qsort(&flightData[0], 2779, sizeof(flightInfo), compareStructs);
			
			
			/*---- Writing the output to a txt file and to screen ----*/ 
			if (outputFile == NULL) {
				printf("Cannot open the file\n");
				printf("ERROR: Cannot write in a new file. The output will only be printed on the screen");
				
			}
			
			else {
				
			
			
				for (i = 0; i < 2779; i++) {
					//Converting integer time to human readable date.
					currentTime = flightData[i].Human_ReadDate;
					loctime = localtime(&currentTime);
					
					
					fprintf(outputFile, "*       Flight Number: %s ------- Origin: %s ------- Destin: %s ------- Date:  ", flightData[i].FlightNum, flightData[i].OriginAirportCode, flightData[i].DestAirportCode);
					fprintf(outputFile, "%s", asctime(loctime));
					fprintf(outputFile, "\n\n");
				
				
				
					printf("*       Flight Number: %s ------- Origin: %s ------- Destin: %s ------- Date:  ", flightData[i].FlightNum, flightData[i].OriginAirportCode, flightData[i].DestAirportCode);
					fputs(asctime(loctime), stdout);
					printf("\n\n");
			
				}
			
			}
			
				countingDestination(flightData, 2780);
		}
		
		fclose(fp);	
		fclose(outputFile);
		
}

