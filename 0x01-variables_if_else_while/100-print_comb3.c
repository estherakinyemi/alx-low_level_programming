#include <stdio.h>
#include <unistd.h>
/**
 ** main - Entry point
 **
 ** Return: Always 0 (Success)
 **/

int main(void)
{
	int d, e;

	for (d = '0' ; d <= '9' ; d++)
	{
		for (e = '0' ; e <= '9' ; e++)
		{
			if (d < e)
			{
				putchar(d);
				putchar(e);

				if (d != '8' || (d == '8' && e != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
