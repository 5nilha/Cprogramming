#include<stdio.h>

#define SIZE 20
	
int main(){

	int grades[10] = { 87, 65, 98, 45 };
	int i;
	double rainfall[SIZE];
	
	grades[0] = 100;
	
	printf("The first element is %i\n", grades[0]);
	
	
	for (i = 0; i < 10; i++){
		printf("Element %i has %i \n", i, grades[i]);
	}
		
		
	for (i = 0; i < SIZE; i++){
		
		printf("Enter a Rainfall amount: ");
		scanf("%lf", &rainfall[i]);
		printf("Total Rainfall %i has %.2lf\n", i, rainfall[i]);
		
	}
}