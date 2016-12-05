#include <stdio.h>
#include <stdlib.h>

int main () {
	double total;
	double taxRate = 0.07;
	double shirt, jeansPants, whiteShoes;
	int quantity;
	
		shirt = 9.90;
		jeansPants = 7.90;
		whiteShoes = 24.65;
	
		total = taxRate * (shirt + jeansPants + whiteShoes) + (shirt + jeansPants + whiteShoes);
	
		printf("\nThe total purchase is: %.2lf\n\n", total);
}