#include <stdio.h>

#define SIZE 5


double findAverage(int a[], int size) {
	double averageResult; 
	int i, sum = 0;
	
	for (i = 0; i < size; i++){
		sum += a[i];	
	}
	
	averageResult = (double)sum / size;
	return averageResult;	
}

int findLargest(int a[], int size) {
	
	int largestSoFar = a[0];
	
	for (i = 1; i < size; i++) {
		if (a[i] > largestSoFar) {
			largestSoFar = a[i];
		} 
	}
	return largestSoFar;
	
}


int main (){
	
	double average;
	
	int arr[SIZE] = { 10, 20, 96, 40, 50 };
	
	average = findAverage(arr, SIZE);
	printf("The average is %.2lf\n\n", average);

	
}