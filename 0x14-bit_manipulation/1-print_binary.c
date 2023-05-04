#include "main.h"

/**
 *print_binary - a function that prints the binary representation of a number.
 *@n : the number
 *Return: the result of conversion
 */

void print_binary(unsigned long int n)
{
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((n >> i) > 0)
	i++;

	while (i-- > 0)
	{
		_putchar((n >> i) & 1 ? '1' : '0');
	}
}
