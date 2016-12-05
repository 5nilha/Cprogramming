# include <stdio.h>


int main() {
	
	double weight, rate;
	int miles, segmentCount = 0, segmentMod = 1, segmentSum = 0, segment = 500;
	
	
	printf("\nWEIGHT: ");
	scanf("%lf", &weight);
	
	printf("MILES: ");
	scanf("%i", &miles);
	
	if (weight <= 2.0) {
		if (miles <= 500){
			rate = 1.50;
		} else if (miles > 500 ){
			segmentCount = miles / segment;
			segmentMod = miles % segment;
			if (segmentMod > 0 && segmentMod < 500){
				segmentSum = segmentCount + segmentMod;
				rate = segmentSum * 1.50;
			} else {
				segmentSum = segmentCount + segmentMod;
				rate = segmentSum * 1.50;
			}
		}
	} else if (weight > 2.0 && weight <= 6.0){
		if (miles <= 500){
			rate = 3.70;
		} else if (miles > 500 ){
			segmentCount = miles / segment;
			segmentMod = miles % segment;
			if (segmentMod > 0 && segmentMod < 500){
				segmentSum = segmentCount + segmentMod;
				rate = segmentSum * 3.70;
			} else {
				segmentSum = segmentCount + segmentMod;
				rate = segmentSum * 3.70;
			}
		}
	} else if (weight > 6.0 && weight <= 10.0){
		if (miles <= 500){
			rate = 5.25;
		} else if (miles > 500 ){
			segmentCount = miles / segment;
			segmentMod = miles % segment;
			if (segmentMod > 0 && segmentMod < 500){
				segmentSum = segmentCount + segmentMod;
				rate = segmentSum * 5.25;
			} else {
				segmentSum = segmentCount + segmentMod;
				rate = segmentSum * 5.25;
			}
		} 
	} else {
			printf("We only ship packages of 10 pounds or less\n\n");
		}
		
	printf("YOUR SHIPPING CHARGE IS $%.2lf\n\n",rate);
}