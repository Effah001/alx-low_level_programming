#include "main.h"

/**
 *clear_bit - a function that sets the value of a bit to 0 at a given index.
 *@n : the value of bit
 *@index : index to found
 *Return: the value of bit at the index
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
