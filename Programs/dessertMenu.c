#include <stdio.h>
#include <stdlib.h>

#define ICE_CREAM_PRICE 1.5
#define APPLE_PIE_PRICE 2.0
#define CHEESE_CAKE 3.5

int main() {
	int choice = 0;
	double totalPrice = 0;
	
	do {
		printf("Choose one of these desserts: \n");
		printf("1. Ice Cream         %.2lf \n", ICE_CREAM_PRICE);
		printf("2. Apple Pie         %.2lf \n", APPLE_PIE_PRICE);
		printf("3. Cheese Cake       %.2lf \n", CHEESE_CAKE);
		printf("4. Exit\n");
		scanf("%i", &choice);
		
		
		switch (choice){
			case 1: 
				totalPrice += ICE_CREAM_PRICE;
				break;
			case 2: 
				totalPrice += APPLE_PIE_PRICE;
				break;
			case 3: 
				totalPrice += CHEESE_CAKE;
				break;
			case 4:
				break;
			default:
				printf("That's not on the menu.\n");
				break;
				
		}
		
			printf("Total so far: $%.2lf\n", totalPrice);
		
	} while (choice != 4);
	
	printf("Thank you. Your order is $%.2lf\n", totalPrice);
}
	
	