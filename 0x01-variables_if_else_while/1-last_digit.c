#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 ** main - Entry point
 **
 **Return : Always 0 (Success)
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int digit = n % 10;
	
	if (digit > 5)
	{
		printf("Last digit of ");
		printf("%d", n);
		printf(" is ");
		printf("%d", digit);
		printf(" and is greater than 5\n");
	}
	if (digit == 0)
	{
		printf("Last digit of ");
		printf("%d", n);
		printf(" is ");
		printf("%d", digit);
		printf(" and is 0\n");
	}
	if (digit < 6 )
	{
		printf("Last digit of ");
		printf("%d",n);
		printf(" is ");
		printf("%d", digit);
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}


