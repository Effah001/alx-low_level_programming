#include "main.h"

int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char*)&a;

	return(*b);
}
