#include <stdio.h>
/**
 ** main - Entry point
 **
 ** Return: Always 0 (Success)
 **/

int main(void)
{
	char ma;

	for (ma = 'a' ; ma <= 'z' ; ma++)
	{
		if (ma != 'e' && ma != 'q')
	{
		putchar(ma);
	}
	}
	putchar('\n');
	return (0);
}
