#include "main.h"

/**
 * int _islower - determine if a character is lowercase
 *
 * Return: 1 if char is lowercase and 0 if not
 */

int _islower(int c)
	{

	if ( c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
		_putchar('\n');
}
