#include "main.h"

/**
* _strncat - concatenate two strings based on n
*@dest : destination string to be concatenated to
*@src : source string
*@n : number of bytes
*Return: nothing
*/

char *_strncat(char *dest, char *src, int n)
	{

	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
	dest[i] = src[j];
	j++;
	i++;
	}
	dest[i] = '\0';

	return (dest);
	}
