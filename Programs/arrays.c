#include<stdio.h>

#define SIZE 4

int main() {
	
	int i, sum = 0;   
	long grade[SIZE];
	double average = 0.0;
	
	for (i = 0; i < SIZE; i++){
		printf("Insert Grade: ");
		scanf("%li", &grade[i]);
		sum += grade[i];
	}
	
	for (i = 0; i < SIZE; i++){
	
	printf("%li ", grade[i]);
	}
	
	printf("\n\n%i", sum);
	average = (double)sum / SIZE;
	
	printf("\n\n Average Grade = %.2lf\n\n", average);
}