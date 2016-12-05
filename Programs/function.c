#include <stdio.h>


int cube(int in){ // in is the parameter
	int result;
	result = in * in * in;
	return result;
}

int main (){
	
	int a;
	
	a = cube(4); // here I pass the argument. 
	printf("%i\n\n", a);
	
}