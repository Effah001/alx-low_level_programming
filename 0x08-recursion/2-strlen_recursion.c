#include "main.h"
/**
* _strlen_recursion - a function that prints the length of the string.
*@s : the length of the string to be displayed
*/

void _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	return  1 + _recursion(s + 1);
}
