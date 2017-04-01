#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union employeeData {
	char name[20];
	char employmentRule[10];
	double salary;
	int age;
	int id;
} employee[3];

int main () {
	
	strcpy(employee.name, "Sharkar-Baskh");
	printf("%s  | ", employee.name);
	
	strcpy(employee.employmentRule, "Sales-Manager");
	printf("%s  | ", employee.employmentRule);
	
	salary = 3800.00;
	printf("Month Salary: %.2lf  | ",employee.salary);
	
	age = 27;
	printf("%d years old  | ", employee.age);
	
	id = 145623;
	printf("Id: %d", employee.id);
	
	printf("\n\n");
	
	
	strcpy(employee.name, "Hellen-Garcia");
	printf("%s  | ", employee.name);
	
	strcpy(employee.employmentRule, "General-Manager");
	printf("%s  | ", employee.employmentRule);
	
	salary = 4200.00;
	printf("Month Salary: %.2lf  | ",employee.salary);
	
	age = 31;
	printf("%d years old  | ", employee.age);
	
	id = 110110;
	printf("Id: %d", employee.id);strcpy(employee.name, "Lucy");
	printf("%s  | ", employee.name);
	
	printf("\n\n");
	
	strcpy(employee.employmentRule, "Intern");
	printf("%s  | ", employee.employmentRule);
	
	salary = 1480.00;
	printf("Month Salary: %.2lf  | ",employee.salary);
	
	age = 23;
	printf("%d years old  | ", employee.age);
	
	id = 180991;
	printf("Id: %d", employee.id);
	
}