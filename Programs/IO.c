#include <stdio.h>

#include <stdlib.h>





main() {
	
	double f;
	double c;
	
	printf("enter temperture in celsius: \n");
	scanf("%lf", &c);
	
	f = (c * 1.8) + 32;
	
	printf("F = %.2lf \n", f);
	
}