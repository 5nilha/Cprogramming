#include <stdio.h> 
#include <stdlib.h>


struct bookCatalog {
	char title[20];
	char author[20];
	int numberPages;
	char publisher[20];
	int yearPublished;
	double price;
} catalog = { "Your Brain at Work",
			"David Rock",
			325,
			"HarperBusiness",
			2009,
			19.63 };

int main () {
	
	printf("-*-*-*-*-*-* Book Information -*-*-*-*-*-*\n\n");
	
	printf("Title: %s\n", catalog.title);
	printf("Author: %s\n", catalog.author);
	printf("Number of pages: %d\n", catalog.numberPages);
	printf("publisher: %s\n", catalog.publisher);
	printf("Published in: %d\n", catalog.yearPublished);
	printf("Sales Price: $%.2lf\n\n", catalog.price);
	
}