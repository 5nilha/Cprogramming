#include <stdio.h>
#include <stdlib.h>

int main (){
	
	FILE *fp;
	char ch;
	int count = 1;
	
	printf("Opening the file ....\n\n");
	
	fp = fopen("noun.txt", "r");
	
	if (fp == NULL){
		printf("The File does not exist\n");
	}
	
	while(ch != EOF) {
		ch = fgetc(fp);
		printf("%c", ch);
		count ++; 
		
	}	
	fclose(fp);	
	printf("\n\nThe file has %d words\n", count);
}