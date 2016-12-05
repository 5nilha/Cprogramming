#include <stdio.h>
#include <stdlib.h>

int main() {
	int count = 1, sum = 0;
	
	while (count <= 100){
		sum = sum + count;
		count = count + 1;
	}
	
	printf("%i\n", sum);


	sum = 0; 
	for(count = 1; count <= 100; count++) {
	sum += count;
	}
	printf("%i\n", sum);

}