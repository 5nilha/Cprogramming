#include <stdio.h>

int main(){

	int secret;
	
	
	
	secret = srand(time(NULL)) % 100;
	printf("The secret is %i\n\n", secret);

	
}