#include <stdio.h>

int main() {
	int u, v ,temp;
	
	printf("Please type two nonnegative integers: \n");
	scanf("%i", &u);
	scanf("%i", &v);
	
	while (v != 0){
		temp = u % v;
		u = v;
		v = temp;
	}
	
	printf("The greastest commom divisor is %i \n", u);
	
	return 0;

}