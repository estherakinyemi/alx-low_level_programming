#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a specified number of elements of an array of integers
 * @a: For the array
 * @n: For the elements
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
