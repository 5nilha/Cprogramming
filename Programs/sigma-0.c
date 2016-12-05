#include <stdio.h>

int sigma(int);

int main(void)
{
	int n;
	
	do {
		printf("Insert a Positive Integer: \n");
		scanf("%i", &n);
	}
// the statement will run only if n > 1. If n < 1 it will ask to insert an integer.
	while (n < 1); 
	
	int answer = sigma(n);
	
	printf("%i \n", answer);
	
}

int sigma (int m)
{
	int sum = 0;
	for (int i = 1; i <= m; i++) 
// In this line I am asking to add all number less than m. So, if will add all number less and equal to the integer I inserted. 
	{
		sum += i;
	}
	return sum;
}