#include "main.h"
#include <stddef.h>

/**
* _strpbrk -  a function that searches a string for any of a set of bytes
*@s : string to be searched
*@accept : character to be located
*Return: nothing
*/

char *_strpbrk(char *s, char *accept)
{
	int x = 0;
	int y;

	while (s[x] != '\0')

	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				return (&s[x]);

			}
			y++;
		}

		x++;
		}

	return (NULL);
}
