#include <stdio.h>


int cube(int in){ // in is the parameter
	int result;
	result = in * in * in;
	return result;
}


void doNothing(double d) {
	
	printf("The double value is: %.2lf \n", d);
}


int summation(int x) {
	int result;
	result = (x * (x + 1)) / 2;
	return result;
}


int main (){
	
	int a, b;
	
	a = cube(3); // here I pass the argument. 
	printf("%i\n\n", a);
	
	
	doNothing(123.456);
	
	b = summation(3);
	printf("The value is: %i \n", b);
	
}