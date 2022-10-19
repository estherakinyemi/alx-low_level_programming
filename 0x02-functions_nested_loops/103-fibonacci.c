#include <stdio.h>

/**
 ** main - Prints the sum of a fibonacci sequence
 **
 ** Return: Always 0 (Success)
 **/

int main(void)
{
	unsigned long s1 = 0, s2 = 0, sum;
	float total_sum;

	while (1)
	{
		sum = s1 + s2;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		s1 = s2;
		s2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}


