#include<stdio.h>

#define TEST 10
#define A 90
#define B 80
#define C 70
#define D 60
#define F 0


int main(){
	
	int i, passed = 0, nopassed = 0, countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;
	double grade[TEST], sum = 0.0, average;
	
	for (i = 0; i < TEST; i++){
		
		printf("Enter Test Score %i: ", i + 1);
		scanf("%lf", &grade[i]);
	}
	
	for (i = 0; i < TEST; i++){
		if (grade[i] < C) {
			nopassed += 1;
			if (grade[i] < D){
				countF += 1;
			} else{
				countD += 1;
			}
			
		} else {
			passed += 1;
			if (grade[i] < B){
				countC += 1;
			} else if (grade[i] < A){ 
				countB += 1;
			} else 
				countA += 1;
		}
		
		sum += grade[i];
	}
	
	printf("Total class score: %.2lf\n\n", sum);
	
	average = sum / TEST;
	
	printf("The class average is:  %.2lf\n\n", average);
	printf("%i Student(s) passed\n", passed);
	printf("%i Student(s) didn't pass\n\n", nopassed);
	printf("A = %i\nB = %i\nC = %i\nD = %i\nF = %i\n\n\n", countA, countB, countC, countD, countF);
}