#include<stdio.h>

#define DAYS 5
	
int main(){

	int i;
	double sum = 0.0, average, rainfall[DAYS];
	
	for (i = 0; i < DAYS; i++){
		
		printf("Enter a Rainfall amount for day %i: ", i + 1);
		scanf("%lf", &rainfall[i]);
		
	}
	
	for (i = 0; i < DAYS; i++){
		sum += rainfall[i];
		
	}

	printf("Total Rainfall is %.2lf\n\n", sum);

	average = sum / DAYS;
	
	printf("The averge rainfall in %i days is: %.2lf\n\n", DAYS, average);

}