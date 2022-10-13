#include <stdio.h>
/**
 ** main - Entry point
 **
 ** Return: Always 0 (Success)
 **/
int main(void)
{
	char charType;
	int integerType;
	long int longintegerType;
	long long int longlongintegerType;
	float floatType;

	printf("Size of  char: %zu byte(s)\n",sizeof(charType));
	printf("Size of int: %zu byte(s)\n",sizeof(integerType));
	printf("Size fo long int: %zu byte(s)\n",sizeof(longintegerType));
	printf("Size of long long int: %zu byte(s)\n",sizeof(longlongintegerType));
	printf("Size of float: %zu byte(s)\n",sizeof(floatType));

	return (0);
}
