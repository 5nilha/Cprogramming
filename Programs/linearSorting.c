#include <stdio.h> 
#define SIZE 4

// Linear sorting 
int main(){
	int arr[SIZE] = { 16, 8, 22, 3 };
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


/* testing reading the code

 pass  |  i      temp    arr index  0   1  2  3  
    1    |  0     16                8  16 
    1    |  1              
	1    |  2     22				8  16  3 22

	2	 |  0    
	2    |  1    16					8  3  16 22
	2 	 |	2	 			
	2    |  3    

	3	 |  0    8					3  8  16 22
	3    |  1    
    3    |  2
    3    |  3

	4    |
    4    |
    4    |
    4    |
    4    | 


*/