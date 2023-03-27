#include "main.h"

/**
*print_rev - print a string in reverse
*@s : pointer to the string to be reversed
* Return: nothing
*/

	void print_rev(char *s)
	{
	int i;
	int len = 0;
		
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	}
