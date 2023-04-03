#include <stddef.h>
#include "main.h"
/**
* _strchr - a function that locate a character in a string
*@s : string to be searched
*@c : character to be located
*Return: nothing
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
		return (s);
	}
		s++;
	}
	return (NULL);
}
