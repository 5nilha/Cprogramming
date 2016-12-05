#include <stdio.h>

int main(){
	
	int arr[8] = {10, 40, 77, 90, 102, 123, 132, 141};
	
	int lower, = 0, higher = 7, mid, found = 0, key = 40, location = 0;
	
	/* Look at a key 40 in the array above. It will divide the array in the middle. If the key is great than the mid value, 
	the program will only look at the right part of the array after the mid point, if the key is lesser than the mid value, the program will only look at the left of the mid point. 
	If the mid point is the key value, the program will find the value in one step. */ 
	
	
	while(lower <= higher && !found){
		mid = (lower + higher) / 2;
		
		if (arr[mid] == key) {
			found = 1;
			location = mid;
		} else if (arr[mid] > key) {
				higher = mid - 1
		} else {
				lower = mid + 1;
		}
	}
	if (found) {
		printf("%i \n", location);	
	} else { 
		printf("Not Found\n\n");
	}
}