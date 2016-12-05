#include<stdio.h>

int main(){
 int a, b, c;
 
 printf("Insert a number: ");
 scanf("%i", &a);
 
 printf("Insert a second number: ");
 scanf("%i", &b);
 
 c = a % b;
 
 printf("Result = %i", c);
}