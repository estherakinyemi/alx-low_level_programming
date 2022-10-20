#include "main.h"

/**
 * print_numbers - Prints numbers 0-9
 *
 * Return: The numbers 0 - 9
 */

void print_numbers(void)
{
	int x;

	for (x = 0 ; x <= 9 ; x++)
	{
		_putchar(x + '0');
	}

	_putchar('\n');
}
