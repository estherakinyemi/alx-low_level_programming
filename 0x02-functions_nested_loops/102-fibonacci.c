#include <stdio.h>
/**
 ** main - Prints first 50 fibonacci numbers starting from 1 and 2
 **
 ** Return: Always 0 (Success)
 **/
int main(void)
{
	int opps;
	unsigned long i1 = 0, i2 = 1, sum;

	for (opps = 0 ; opps < 50 ; opps++)
	{
		sum = i1 + i2;

		printf("%lu", sum);

		i1 = i2;
		i2 = sum;

		if (opps == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
