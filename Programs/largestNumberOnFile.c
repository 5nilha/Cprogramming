#include <stdio.h>
#include <stdlib.h>

int main() {
	
	FILE* inFile;
	FILE* outFile;
	int number = 0;
	int largestNumber = 0;
	int count = 0;
	
	inFile = fopen("numbers.txt", "r");
	outFile = fopen("largestNumber.txt", "r");
	
	
	printf("Opening File!\n\n");
	
	if (inFile == NULL){
		printf("File doesn't exist!\n\n");
		return 1;
	}
	
	
	fscanf(inFile, "%d", &largestNumber);
	
	while (!feof(inFile)){
		fscanf(inFile, "%d", &number);
		
		if (number > largestNumber){
			largestNumber = number;
			count = 0;
		}

		if (number == largestNumber){
			count += 1;
		}
		
	}
	
	
	fclose(inFile);
	
	printf("Largest Number: %d\n", largestNumber);
	printf("occurs %d times\n\n", count);
	
	
	
}