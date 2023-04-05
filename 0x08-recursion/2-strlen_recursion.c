#include "main.h"

void _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	return  1 + _recursion(s + 1);
}
