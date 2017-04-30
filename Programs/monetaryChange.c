
#include <stdio.h>

typedef struct MonetaryChange_struct {
   int quarters;
   int dimes;
   int nickels;
   int pennies;
} MonetaryChange;

MonetaryChange ComputeChange(int cents) {
   MonetaryChange change;

   
   change.quarters = cents / 25;
   
   if (cents % 25 >= 10 & cents % 25 < 20) {
      
      change.dimes = 1;
      cents -= 10;
      
   }   
   
   else if (cents % 25 >= 20) {
      
      change.dimes = 2;
      cents -= 20;
      
   }   
   
   if (cents % 25 >= 5){
      change.nickels = 1;
      cents -= 5;
   }
   
   if (cents % 25 > 0){
      int num = cents % 25;
      for (int i = 0; i < num; i++) {
      change.pennies += 1;  
      }
   }   

   return change;
}

int main(void) {
   int userCents = 0;
   MonetaryChange change;

   printf("Enter cents: \n");
   scanf("%d", &userCents);

   change = ComputeChange(userCents);

   printf("Quarters: %d\n", change.quarters);
   printf("Dimes: %d\n", change.dimes);
   printf("Nickels: %d\n", change.nickels);
   printf("Pennes: %d\n", change.pennies);


   return 0;
}
