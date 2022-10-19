#include "main.h"
/**
 ** print_last_digit - prints the last digit of an integer
 **
 **@m: Integer inputed
 **
 **Return: Last digit of an integer
 **/

int print_last_digit(int m)
{
	int j;

	j =  m % 10;
	if (j < 0)
	{
		j = (-1 * j);
	}
	_putchar(j + '0');
	return (j);
}
