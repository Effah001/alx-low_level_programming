#include "main.h"
/**
*_puts - prints a string to stdout
*@n : pointer to an integer to be reset
* Return: nothing
*/

void _puts(char *str)
	{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
	}
