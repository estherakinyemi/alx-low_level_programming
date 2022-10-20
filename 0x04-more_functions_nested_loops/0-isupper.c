#include "main.h"

/**
 * _isupper - Check if a letter is upper
 * @b: The number to be checked
 *
 * Return: 1 for upper letter or 0 for any else
 */

int _isupper(int b)
{
	if (b >= 65 && b <= 90)
	{
		return (1);
	}

	return (0);
}
