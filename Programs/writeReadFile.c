#include <stdio.h>
#include <stdlib.h>


struct student {
	char name[20];
	int roll_number;
	int marks;
};

int main (){
	
	struct student s;
	
	FILE *fp;
	char answer;
	
	fp = fopen ("student1.dat", "w");
	
	while (1){
		printf("Enter the student's name, Roll-Number and mark: ");
		scanf("%s %d %d", s.name, &s.roll_number, &s.marks);
		
		fprintf(fp, "%s %d %d \n", s.name, s.roll_number, s.marks);
		
		printf("Do you want to add another student? (y|n) \n");
		//fflush(stdin); // clear the buffer of the keyboard 
		
		scanf("%c", &answer);
		if (answer == 'n'){
			break;
		}
	}
	
	fclose(fp);
}