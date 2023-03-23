#include "main.h"
/**
 * _isupper -check if char is uppercase or not
 * @c: is the char to be checked
 * Return: 1 if char is uppercase and 0 if not
 */

int _isupper (int c)
	{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
