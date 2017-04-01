#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[20];
	int startYear;
	char courseMajor[30];
} studentData = { "Fabio",
			  	  2015,
			  	  "Computer Science"};

int main (){

	// scanf("%s", studentData.name);
// 	scanf("%s", studentData.courseMajor);
// 	scanf("%i", &studentData.startYear);
	
	printf ("Name: %s\n", studentData.name);
	printf ("Major: %s\n", studentData.courseMajor);
	printf ("Started: %d\n", studentData.startYear);
	printf ("\n\n\n");
	
	printf ("The size of structure is %d bytes \n\n", sizeof(studentData));
	printf ("The address of name %u\n", &studentData.name);
	printf ("The address of courseMajor %u\n", &studentData.courseMajor);
	printf ("The address of startYear is %u\n", &studentData.startYear);

}