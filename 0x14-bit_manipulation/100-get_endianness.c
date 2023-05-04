#include "main.h"

/**
*get_endianness - a function that checks the endianness
*Return: endianness
*/

int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char * )&a;

	return (*b);
}
