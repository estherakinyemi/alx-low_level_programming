#include <unistd.h>

int _putchar(char *ad)
{
	return(write(1, &*ad, 1));
} 
