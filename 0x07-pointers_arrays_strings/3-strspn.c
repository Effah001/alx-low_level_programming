#include "main.h"

/**
* _strspn - a function that gets the length of a prefix substring
*@s : string to be searched
*@accept : character to be located
*Return: nothing
*/


unsigned int _strspn(char *s, char *accept)
{
	int x = 0;
	int y = 0;
	unsigned int count = 0;

	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				count++;
				break;
			}
			y++;
		}
		if (accept[y] == '\0')
		{
			break;
		}
			x++;
		}
	return (count);
}
