#include "main.h"

/**
 int _isalpha - tell if a character is lowercase or uppercase
 *
 * Return: On success 1.
 * On error, 0 is returned
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
