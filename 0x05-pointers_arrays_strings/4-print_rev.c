#include "main.h"

/**
*print_rev: print a string in reverse
* Return: nothing
*/

	void print_rev(char *s)
	{
	int len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (int i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
	}
