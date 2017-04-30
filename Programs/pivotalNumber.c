#include <stdio.h>
#include <stdlib.h>


int main () {
	
	int number = 0;
	int pivotal = 0;
	char fileName[1000];
	
	FILE* file1;
	FILE* file2;
	
	printf("Insert the file pathname: ");
	scanf("%s", fileName);
	
	
	file1 = fopen(fileName, "r");
	file2 = fopen(fileName, "r");
	
	
	
	
	
	printf("Opening file!\n\n");
	
	if (file1 == NULL) {
		printf("Cannot open the file!\n\n");
		exit(-1);
	}
	
	fscanf(file1, "%d", &pivotal);
	
	
	int i = 0;
	while (!feof(file1)) {

		fscanf(file1, "%d", &number);

		if (number < pivotal){
			printf("%d ", number);
		}
	}

	printf("%d ", pivotal);
	
	while (!feof(file2)) {
		fscanf(file2, "%d", &number);
		
		if (number > pivotal){
			printf("%d ", number);
		}
	}
	
	fclose(file1);
	fclose(file2);
	
	printf("\n\n");
	
}