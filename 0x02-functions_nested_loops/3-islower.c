#include "main.h"

/**
 * int _islower - determine if a character is lowercase
 *
 * Return: 1 if char is lowercase and 0 if not
 */

int _islower(int c)
	{

	if ( c >= 'a' && <= 'z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
		_putchar('\n');
}
