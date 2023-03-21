#include "main.h"

/**
 * int _isalpha - determines if the character is lowercase or uppercase
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
	{

	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
		_putchar('\n');
}
