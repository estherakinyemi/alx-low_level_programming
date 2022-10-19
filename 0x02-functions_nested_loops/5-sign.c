#include "main.h"
/**
 ** print_sign - Prints the sign of a number
 **
 ** @v: is the number to be inputed
 **
 **Return: 1 if positive, 0 if 0, -1 if negative
 **/
int print_sign(int v)
{
	if (v > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (v == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
