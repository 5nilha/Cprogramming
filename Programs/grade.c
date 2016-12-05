#include <stdio.h>

int main () {
	
	float grade1, grade2, grade3, grade4;
	float average = 0.0, sum = 0.0;
	float n = 4.0; // number of grades
		
		printf("\n\nEnter the Grade test 01: ");
		scanf("%f", &grade1);
		
		printf("Enter the Grade test 02: ");
		scanf("%f", &grade2);
		
		printf("Enter the Grade test 03: ");
		scanf("%f", &grade3);
		
		printf("Enter the Grade test 04: ");
		scanf("%f", &grade4);
		
		
		sum = grade1 + grade2 + grade3 + grade4;
			
		average = sum / n;
		
		printf("\n\nAverage: %.2f\n", average);
		
			if (average >= 90.0 && average <= 100.0){
				printf("Letter: A\n\n");
			
			} else if (average >= 80.0 && average < 90.0){
				printf("Letter: B\n\n");
				
			} else if (average >= 70.0 && average < 80.0){
				printf("Letter: C\n\n");
				
			} else if (average >= 60.0 && average < 70.0) {
				printf("Letter: D \n\n");
			} else {
				printf("Letter: F\n\n");
				
			}
}