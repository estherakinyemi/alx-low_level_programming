#include "main.h"
/**
 ** print_alphabet_x10 -  Prints the alphabet 10 times
 **
 ** Return: x10 a-z
 **/

void print_alphabet_x10(void)
{
	int p, f;

	f = 0;

	while (f < 10)
	{
		for (p = 'a' ; p <= 'z' ; p++)
		{
			_putchar(p);
		}
		f++;
		_putchar('\n');
	}
}
