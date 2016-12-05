#include <stdio.h>

int main (){
	int creditScore;
	
	printf("\n\nEnter your Credit Score: ");
	scanf("%i", &creditScore);
	
	if (creditScore >= 300 && creditScore <= 560){
	
		printf("\nVery Bad Credit Score\n\n");
		
	} else if (creditScore > 560 && creditScore <= 650){
		printf("\nBad Credit Score\n\n");
		
	} else if (creditScore > 650 && creditScore <= 700){
		printf("\nFair Credit Score\n\n");
	
	} else if (creditScore > 700 && creditScore <= 750) {
		printf("\nGood Credit Score\n\n");
	
	} else if (creditScore > 750 && creditScore <= 850) {
		printf("\nExcelent Credit Score\n\n");
	
	} else {
		printf("\nYou didn't enter a right credit score\n");
		
	}
	return 0;
}