#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** 
 ** Function main are;
 ** header libraries necessary for code to be executeable
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d", n);
		printf(" is positive\n");
	}
	if (n < 0)
	{
		printf("%d", n);
		printf(" is negative\n");
	}
	if (n == 0)
	{
		printf("%d", n);
		printf(" is zero\n");
	}
	return (0);
}
