#include <stdio.h> 
#define SIZE 5

// Linear sorting 
int main(){
	int arr[SIZE] = { 16, 8, 2, 30, 10 };
	int i, temp, pass;
	
	for (pass = 1; pass < SIZE; pass++){
		for (i = 0; i < SIZE - 1; i++){
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

/* pass  |  i    temp    arr index  0   1  2  3  4
    1    |  0     16                8  16  
    1    |  1     16                8  2  16
	1    |  2       
	1	 |  3    30					8  2  16  10 30

	2	 |  0    8                  2  8
	2    |  1    
	2 	 |	2	 16					2  8  10  16 30
	2    |  3    

*/