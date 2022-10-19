#include "main.h"
/**
 ** _abs - printss the absolute value of an integer
 **
 **@i: Integer inputed
 **
 ** Return: absolute value of i
 **/

int _abs(int i)
{
	return (i * ((i > 0) - (i < 0)));
}
