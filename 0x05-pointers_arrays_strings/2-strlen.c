#include "main.h"
/**
 * _strlen - Finds the length of a string
 * @s: The string whose length is to be found
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != 0)
	{
		n++;
	}
	return (n);
}
