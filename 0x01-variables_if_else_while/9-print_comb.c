#include <stdio.h>
/**
 ** main - Entry point
 **
 ** Return: Always 0 (Success)
 **/

int main(void)
{
	int f;

	for (f = '0' ; f <= '9' ; f++)
	{
		putchar(f);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
