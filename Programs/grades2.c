#include <stdio.h>

int main(){
	
	int count = 0, sum = 0;
	double average, grade;
	
	printf("Enter a grade: (-999 to stop!)\n\n");
	scanf("%lf", &grade);
	while (grade != -999){
		sum = sum + grade;
		count = count + 1;
		printf("Enter a grade: (-999 to stop)\n");
		scanf("%lf", &grade);
	}
	average = (double) sum / count;
	printf("You entered %i grades\n", count);
	printf("the sum of the grades is %.2d\n", sum);
	printf("The Average of the grades is %.2lf\n\n", average);
}