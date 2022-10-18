#include "main.h"
/**
 ** _islower - Discovers which characters are in lowercase
 **
 **@a:single letter input
 **
 ** Return: 1 for lowercase, others 0
 **/

int _islower(int a)
{
	if (a >= 'a' && a <= 'z')
	return (1);
	else
	return (0);
}
