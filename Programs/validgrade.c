#include <stdio.h>

int main(){
	
	int grade, passingGrade = 0, count = 0;
	printf("\n\n");
	do {
		
		printf("Enter a grade (or enter -1 to finish):  ");
		scanf("%i", &grade);
	
		if (grade >= 0 && grade <= 100){
			count += 1;
			if (grade >= 70){
				passingGrade += 1;
			}  
		} else {
			printf("That is not a valid grade!\n");
		}
	}
	
	while (grade != -1);
	
printf("You entered valid %i grades, and %i passing grades.\n\n", count, passingGrade);
}