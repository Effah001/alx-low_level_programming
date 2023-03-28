#include "main.h"
/**
*_puts - prints a string to stdout
*@str : pointer to the string to be printed
* Return: nothing
*/

void _puts(char *str)
	int i = 0;

	{
	while (str[i] != '\0')
	{
	_putchar(str[i]);
	str++;
	}
	_putchar('\n');
	}
