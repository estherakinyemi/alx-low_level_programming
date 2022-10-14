#include <stdio.h>
/**
 ** main - Entry point
 **
 ** Return: Always 0 (Success)
 **/

int main(void)
{
	char ad, bc;

	for (ad = 'a' ; ad <= 'z' ; ad++)
	{
		putchar(ad);
	}
	for (bc = 'A' ; bc <= 'Z' ; bc++)
	{
		putchar(bc);
	}
	putchar('\n');
	return (0);
}
