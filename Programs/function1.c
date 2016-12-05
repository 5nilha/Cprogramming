#include <stdio.h>

#include <stdio.h>

int GetPositiveInt();

int main(void)
{
	
	int n = GetPositiveInt();
	printf("Thanks for the positive integer number %i!\n", n);
}

int GetPositiveInt(void)
{
	int n;
	do
	{
		printf("Insert a positive integer: \n");
		scanf("%i", &n);
	}
	while (n < 1);
	return n;
	
}