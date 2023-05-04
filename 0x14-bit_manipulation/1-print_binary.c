#include "main.h"

/**
 *print_binary - a function that prints the binary representation of a number.
 *@n : the number
 *Return: the result of conversion
 */

void print_binary(unsigned long int n)
{
	int i = sizeof(unsigned long int) * 8 - 1;

	while (i >= 0)
	{
		_putchar((n >> i) & 1 ? '1' : '0');
		i++;
	}
}
