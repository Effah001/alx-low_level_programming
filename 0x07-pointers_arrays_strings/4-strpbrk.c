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
	int i = 0;
	int j;

	while(s[i] != '\0')

	{
		j = 0;
		while(accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return &s[i];
		
			}
			j++;
		
		}
		
		i++;
		}

	return NULL;
}
