#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	
	char name[20];
	
	printf("Enter a name: ");
	scanf("%s", name);
	
	int length = strlen(name);
	
	printf("\n\n");
	printf("The name is %s with %d characters\n\n", name, length);
}