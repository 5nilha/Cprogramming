#include<stdio.h>

#define SIZE 40

int main() {
	srand(time(NULL));
	int i, sum = 0;   
	long grade[SIZE];
	double average = 0.0;
	
	for (i = 0; i < SIZE; i++){
		grade[i] = rand() % 100 + 1;
		sum += grade[i];
	}
	
	for (i = 0; i < SIZE; i++){
	
	printf("%li ", grade[i]);
	}
	
	printf("\n\n%i", sum);
	average = (double)sum / SIZE;
	
	printf("\n\n Average Grade = %.2lf\n\n", average);
}