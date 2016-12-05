 #include<stdio.h>
 
 int main(void)
 {
	 int n;
	 
	 do 
	 {
		 // get the number of people in the room
		 printf("Insert the number of people in the room: \n");
		 scanf("%i", &n);
	 }
	 
	 while (n < 1);
	 //declare array in which to store everyone's age
	 int ages[n];
	 
	 // get everyone's age
	 for (int i = 0; i < n; i++)
	 {
		 printf("Age of person #%i: ", i + 1);
		 scanf("%i", &ages[i]);
	 }
	 
	 printf("time passes...\n");
	 
	 for (int i = 0; i < n; i++)
	 {
		 printf("Ten from now, person #%i will be %i years old. \n", i + 1, ages[i] + 10);
		 // the first i + 1 is to start counting the people in #1 not #0, the second is to add the years from now
	 }
 }