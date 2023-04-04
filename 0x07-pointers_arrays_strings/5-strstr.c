#include "main.h"
#include <stddef.h>

/**
* _strstr - a function that locates a substring.
*@haystack : string to be searched
*@needle : string to be located
*Return: nothing
*/

char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
	for (y = 0; needle[y] != '\0'; y++)
	{
		if (haystack[x + y] != needle[y])
		{
		break;
	}
	}
	if (needle[y] == '\0')
	{
		return (&haystack[x]);
	}
	}
	return (NULL);
}
