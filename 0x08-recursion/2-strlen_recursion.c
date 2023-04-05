#include "main.h"
/**
* _strlen_recursion - a function that prints the length of the string.
*@s : the length of the string to be displayed
*Return : The length
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return  (1 + _strlen_recursion(s + 1));
}
