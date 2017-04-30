#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {
	
	char phrase[40] = "this string is written in uppercase";
	char uppercaseString[40];
	int i = 0;
	
	while (phrase[i]) {
		
		uppercaseString[i] = toupper(phrase[i]);
		i++;
	}
	
	
	printf("\n%s\n\n", uppercaseString);
	
}