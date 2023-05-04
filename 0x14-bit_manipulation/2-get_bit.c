#include "main.h"

/**
 *get_bit - a function that returns the value of a bit at a given index.
 *@n : the value of bit
 *@index : index to found
 *Return: the value of bit at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 -1))
		return (-1);

	return (n >> index) & 1;
}
