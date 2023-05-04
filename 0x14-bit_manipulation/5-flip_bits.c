#include "main.h"

/**
 *flip_bits - a function that returns the number of bits you would need
 * to flip to get from one number to another.
 *@n : number to be fliped to 
 *@m : number to be fliped to 
 *Return: the number of count
 */

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
