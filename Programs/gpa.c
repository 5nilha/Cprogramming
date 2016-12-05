#include <stdio.h>

int main (){
	float gpa;
	
	printf("\n\nEnter your GPA: ");
	scanf("%f", &gpa);
	
	if (gpa >= 2.5 && gpa <= 4){
	
		printf("\nYou can Transfer to another University.\n\n");
		if (gpa > 3.0) {
			
			printf("You can apply to UC Berkeley.\n\n");
			
			if (gpa > 3.9) {
			printf("You can apply to Harvard.\n\n");
			}
			
		} else {
			printf("You can Apply to UCF.\n\n");
		} 
	
	} else if (gpa >= 0.0 && gpa <= 2.5) {
		printf("\nYou cannot transfer.\n\n");
	
	} else {
		printf("\nYou didn't enter a right GPA.\n\n");
		
	}
}