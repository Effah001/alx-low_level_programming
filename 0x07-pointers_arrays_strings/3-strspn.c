#include "main.h"

/**
* _strspn - a function that gets the length of a prefix substring
*@s : string to be searched
*@accept : character to be located
*Return: nothing
*/


unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int count = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
			i++;
		}
	return (count);
}
