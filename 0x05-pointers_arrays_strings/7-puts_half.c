#include "main.h"
/**
* puts_half -  prints the second half of a string
*@str : pointer to a string
* Return: nothing
*/
	int i, n, len;

	void puts_half(char *str)
	{
	len = 0;
	while (str[len] != '\0')
	{
        len++;
	}
	n = len / 2;
	if (len % 2 != 0)
	{
	n = (len - 1) / 2;
	}
	for (i = n; i < len; i++)
	{
        _putchar(str[i]);
	}
	_putchar('\n'); 
}
