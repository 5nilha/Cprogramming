#include <stdio.h> 
#define SIZE 5

// Bubble Sorting 
int main(){
	int arr[SIZE] = { 16, 8, 2, 30, 10 };
	int i, temp, pass;
	
	for (pass = 1; pass < SIZE; pass++){
		for (i = 0; i < SIZE - pass; i++){
			if (arr[i] > arr[i + 1]){
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	for(i = 0; i < SIZE; i++) {
		printf("%i \n", arr[i]);
	}
	printf("Pass = %i\n\n", pass);
}