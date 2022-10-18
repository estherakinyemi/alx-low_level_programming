#include "main.h"
/**
 ** print_alphabet - Prints alphabet in lowercase
 **
 ** Return: Always 0 (Success)
 **/

void print_alphabet(void)
{
	int p;

	for (p = 'a' ; p <= 'z' ; p++)
	{
		_putchar(p);
	}
	_putchar('\n');
}
