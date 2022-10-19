#include "main.h"
/**
 ** _isalpha - Discovers characters that are alphabets
 **
 ** @p: single letter input
 **
 ** Return: 1 for all letters, 0 for others
 **/

int _isalpha(int p)
{
	if (((p >= 'a') && (p <= 'z')) || ((p >= 'A') && (p <= 'Z')))
	return (1);
	else
	return (0);
}
