#include <stdio.h>
#include <stdlib.h>

int main (){
	
	FILE *fp;
	char ch;
	
	fp = fopen("student.doc", "w");
	
	printf("Enter the message. Press 'q' to quit.\n");
	
	while (1){
		scanf("%c", &ch);
		fputc(ch, fp);
		
		if (ch == 'q'){
			break;
		}
	}
	fclose(fp);
}