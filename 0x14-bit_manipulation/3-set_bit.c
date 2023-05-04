#include "main.h"

/**
 *set_bit - a function that sets the value of a bit to 1 at a given index.
 *@n : the value of bit
 *@index : index to found
 *Return: the value of bit at the index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	*n |= (1 << index);
	return (1);
}
