#include "main.h"
/**
 * _isalpha - checks for an alphabet
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
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
