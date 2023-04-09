#include "main.h"

/**
 * _puts - print the string
 *@s : string
 * Return: none
 */

void _puts(char *s)
{
int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
