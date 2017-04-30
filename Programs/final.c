#include <stdio.h>
#include <stdlib.h>
#define SIZE 11

int numbers[SIZE];


void printData(int value, double average){
	char symbol = '*';
	char symbol2 = '+';
	
	if (!((value > average) || (value < average))){
		for (int i = 0; i < value; i++){
			printf("%c", symbol2);
		}
		printf(" %d", value);
	}
	else {
		for (int i = 0; i < value; i++){
			printf("%c", symbol);
		}
		printf(" %d", value);
	}
}

int main () {
	
	FILE *file;
	file = fopen("final_data.dat", "r");
	int count;
	int sum;
	double average;
	int i = 0;
	
	
	if (file == NULL){
		printf("Cannot open the file\n");
		exit(-1);
	}
	
	while (!feof(file)){
		fscanf(file, "%d", &numbers[i]);
		i++;
	}
	
	fclose(file);
	
	for (i = 0; i < SIZE; i++){
		sum += numbers[i];
		count++;
	}
	
	average = (double) sum / count;
	
	printf("Count: %d\n", count);
	printf("Average: %.2lf\n", average);
	printf("\n\n");
	
	for(int i = 0; i < count; i++){
		printData(numbers[i], average);
		printf("\n");
	}
}