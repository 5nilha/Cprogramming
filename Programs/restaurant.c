#include <stdio.h>

#define SALAD_BURGER_PRICE 3.50
#define DOUBLE_BURGER_PRICE 3.35
#define ANIMAL_BURGER_PRICE 5.95
#define HAMBURGER_PRICE 1.35
#define CHEESEBURGER_PRICE 2.10
#define FRIES_PRICE 0.65
#define SODA_PRICE 1.00
#define MILKSHAKE_PRICE 3.75

int main(){
	
	int itemNumber, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0;
	double total = 0, totalPrice, tax = 0, taxRate = 0.075;
	char answer, ketchup;
	
	START:
	
	printf("\n\n#############################################################################\n\n");
	printf("\t\t\tWELCOME TO FACEBURGER\n\n");
	printf("\tMAY I TAKE YOUR ORDER?\n\n");
	
	printf("\t      MENU\n\n");
	printf("\t# 1.\tSALAD BURGER                         $%.2lf\n", SALAD_BURGER_PRICE);
	printf("\t# 2.\tDOUBLE BURGER                        $%.2lf\n", DOUBLE_BURGER_PRICE);
	printf("\t# 3.\tANIMAL BURGER                        $%.2lf\n", ANIMAL_BURGER_PRICE);
	printf("\t# 4.\tHAMBURGER                            $%.2lf\n", HAMBURGER_PRICE);
	printf("\t# 5.\tCHEESEBURGER                         $%.2lf\n", CHEESEBURGER_PRICE);
	printf("\t# 6.\tFRIES                                $%.2lf\n", FRIES_PRICE);
	printf("\t# 7.\tSODA                                 $%.2lf\n", SODA_PRICE);
	printf("\t# 8.\tMILKSHAKE                            $%.2lf\n\n", MILKSHAKE_PRICE);
	printf("\t# 9. DONE WITH THIS ORDER\n\n");
	
	do{ 
	
		printf("\tENTER THE MENU NUMBER: ");
		scanf("%i", &itemNumber);
	
		switch (itemNumber){
			case 1:
				printf("\t\tITEM PRICE:     $%.2lf\n", SALAD_BURGER_PRICE);
				total += SALAD_BURGER_PRICE;
				count1 += 1;
				printf("\t\tTOTAL SO FAR:   $%.2lf\n\n", total);
				break;
			case 2: 
				printf("\t\tITEM PRICE:     $%.2lf\n", DOUBLE_BURGER_PRICE);
				total += DOUBLE_BURGER_PRICE;
				count2 += 1;
				printf("\t\tTOTAL SO FAR:   $%.2lf\n\n", total);
				break;
			case 3:
				printf("\t\tITEM PRICE:     $%.2lf\n", ANIMAL_BURGER_PRICE);
				total += ANIMAL_BURGER_PRICE;
				count3 += 1;
				printf("\t\tTOTAL SO FAR:   $%.2lf\n\n", total);
				break;
			case 4:
				printf("\t\tITEM PRICE:     $%.2lf\n", HAMBURGER_PRICE);
				total += HAMBURGER_PRICE;
				count4 += 1;
				printf("\t\tTOTAL SO FAR:   $%.2lf\n\n", total);
				break;
			case 5:
				printf("\t\tITEM PRICE:     $%.2lf\n", CHEESEBURGER_PRICE);
				total += CHEESEBURGER_PRICE;
				count5 += 1;
				printf("\t\tTOTAL SO FAR:   $%.2lf\n\n", total);
				break;
			case 6:				
				printf("\t\tITEM PRICE:     $%.2lf\n", FRIES_PRICE);
				total += FRIES_PRICE;
				count6 += 1;
				printf("\t\tTOTAL SO FAR:   $%.2lf\n\n", total);
				break;
			case 7:
				printf("\t\tITEM PRICE:     $%.2lf\n", SODA_PRICE);
				total += SODA_PRICE;
				count7 += 1;
				printf("\t\tTOTAL SO FAR:   $%.2lf\n\n", total);
				break;
			case 8: 
				printf("\t\tITEM PRICE:     $%.2lf\n", MILKSHAKE_PRICE);
				total += MILKSHAKE_PRICE;
				count8 += 1;
				printf("\t\tTOTAL SO FAR:   $%.2lf\n\n", total);
				break;	
			case 9:
				printf("\t\tDONE WITH THIS ORDER.\n\n");
				break;
			default: 
				printf("\t\t\t*** ERROR: THIS IS NOT ON THE MENU.\n\n");
				break;
			}
			
		} while (itemNumber != 9);
			
		tax = taxRate * total;
		totalPrice = total + tax;
		
		printf("---------------------------------------------------------\n");		
		printf("\n\tREVIEW YOUR ORDER:\n");
		
		if (count1 > 0 && count1 < 2){
			printf("\t\t                  %i SALAD BURGER\n", count1);
		} else if (count1 >= 2){
			printf("\t\t                  %i SALAD BURGERS\n", count1);
		}
		if (count2 > 0 && count2 < 2){
			printf("\t\t                  %i DOUBLE BURGER\n", count2);
		} else if (count2 >= 2){
			printf("\t\t                  %i DOUBLE BURGERS\n", count2);
		}
		if (count3 > 0 && count3 < 2){
			printf("\t\t                  %i ANIMAL BURGER\n", count3);
		} else if (count3 >= 2){
			printf("\t\t                  %i ANIMAL BURGERS\n", count3);
		}
		if (count4 > 0 && count4 < 2){
			printf("\t\t                  %i HAMBURGER\n", count4);
		} else if (count4 >= 2){
			printf("\t\t                  %i HAMBURGERS\n", count4);
		}
		if (count5 > 0 && count5 < 2){
			printf("\t\t                  %i CHEESEBURGER\n", count5);
		} else if (count5 >= 2){
			printf("\t\t                  %i CHEESEBURGERS\n", count5);
		}
		if (count6 > 0){
			printf("\t\t                  %i FRENCH FRIES\n", count6);
		}
		if (count7 > 0 && count7 < 2){
			printf("\t\t                  %i SODA\n", count7);
		} else if (count7 >= 2){
			printf("\t\t                  %i SODAS\n", count7);
		}
		if (count8 > 0 && count8 < 2){
			printf("\t\t                  %i MILKSHAKE\n", count8);
		} else if (count8 >= 2){
			printf("\t\t                  %i MILKSHAKES\n", count8);
		}
		
		if(count6 > 0) {
			printf("\t\t                  DO YOU WANT KETCHUP? ");
		}
		
		printf("\n\n\n");
			
		printf("\t\tTOTAL:            $%.2lf\n", total);
		printf("\t\tTAX:              $%.2lf\n", tax);
		printf("\t\tTOTAL ORDER:      $%.2lf\n", totalPrice);
		printf("---------------------------------------------------------\n\n");
		
		printf("\t\tTHANK YOU FOR COMING TO FACEBURGER\n");
		printf("\t\tCOME BACK SOON.\n\n");
		printf("#############################################################################\n\n\n\n\n");
		
		QUESTION:
		
		printf("Starting another Order (Y or N)? ");
		// the program will ask the user if the he/ she wants start another order.
		
		scanf("%s", &answer);
		if (answer == 'Y' || answer == 'y'){
			goto START;
		} else if(answer =='n'|| answer == 'N') { 
			printf("GOODBYE!\n\n");
		} else{ 
			goto QUESTION;
		}
		
}