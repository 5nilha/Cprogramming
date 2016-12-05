#include <stdio.h>

int main(){

	int a = 2, b = 4, c = 11, result;
	double d1 = 3.4, d2 = 1.7, doubleResult;
	
	result = a + c / b;
	printf("%.2i \n\n", result);
	
	result = (a + c) / b;
	printf("%.2i\n\n", result);
	
	result = (b * a) + c / a;
	printf("%.2i \n\n", result);
	
	result = (int) d1 + (int) d2;
	printf("%.2i \n\n", result);
	
	result = (int) (d1 + d2);
	printf("%.2i \n\n", result);
	
	doubleResult = c / b + 6;
	printf("%.2f \n\n", doubleResult);

	doubleResult = (double) c / b + a;
	printf("%.2f \n\n", doubleResult);
	
	doubleResult = d1 + d2 * a;
	printf("%.2f \n\n", doubleResult);
	
	doubleResult = (a + c) % a * d2;
	printf("%.2f \n\n", doubleResult);
	
	doubleResult = a * -d2;
	printf("%.2f \n\n", doubleResult);

}