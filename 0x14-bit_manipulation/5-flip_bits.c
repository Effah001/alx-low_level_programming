#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned long int count = 0;

	while (result)
	{
		result &= (result - 1);
		count++;
	}

	return (count);
}
