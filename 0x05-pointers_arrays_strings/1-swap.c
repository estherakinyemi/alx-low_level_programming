#include "main.h"
/**
 * swap_int - Swaps value of 2 integers
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 *
 * Return: Result of the swap
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
