#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union employeesCard {
	char name[20];
	char dpto[10];
	int id;
} employee; 

/* Using union, all data is stored in the same memory lacation */

int main(){
	strcpy(employee.name, "John-Teller");
	printf("%s ", employee.name);
	
	strcpy(employee.dpto, "Marketing");
	printf("Dpto of %s ", employee.dpto);
	
	employee.id = 123456;
	printf("ID: %d", employee.id);
	
	printf("\n\n");
}