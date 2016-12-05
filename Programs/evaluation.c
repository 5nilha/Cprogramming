#include <stdio.h>

int main(){
	
int a = 5, b = 4, c = 3, d = 2, boolean;
	
printf("\n\n");
	printf("(a <= b + 1) = ");
	boolean = (a <= (b + 1));
		printf("%d \n\n", boolean);

	printf("(a < b && c > b) = ");
	boolean = ((a < b) && (c > b));
		printf("%d \n\n", boolean);

	printf("(a >= c || d >= 5) = ");
	boolean = ((a >= c) || (d >= 5));
		printf("%d \n\n", boolean);

	printf("(!(a > b)) = ");
	boolean = (!(a > b));
		printf("%d \n\n", boolean);
				
	printf("(b >= a && !(d < b)) = ");		
	boolean = ((b >= a) && (!(d < b)));
		printf("%d \n\n", boolean);	
		
	return 0;
}