#include <stdio.h>

int main(){
	int number = 49, sum = 0;
	
	while (number <= 700){
		printf("Count has %i\n", number);
		sum = (sum + number);
		number = number + 7;
		
	}
	
	printf("Sum is : %i\n\n", sum);
}