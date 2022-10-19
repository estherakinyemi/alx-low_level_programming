#include <stdio.h>
#include "main.h"
/**
 ** print_to_98 - a function that prints from the input to 98
 **
 **@s: Number inputed
 **
 ** Return: Always 0 (Success)
 **/

void print_to_98(int s)
{
	if (s < 98)
	{
		while (s <= 98)
		{
			printf("%d", s);
			if (s != 98)
			{
				printf(", ");
			}
			s++;
		}
	}
	else if (s > 98)
	{
		while (s >= 98)
		{
			printf("%d", s);
			if (s != 98)
			{
				printf(", ");
			}
			s--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
