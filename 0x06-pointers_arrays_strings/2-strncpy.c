#include "main.h"
/**
* _strncpy - copies a sting into another string
*@dest : destination string to be copied to
*@src : source string
*@n : number of strings to be copied
*Return: nothing
*/

char *_strncpy(char *dest, char *src, int n)
	{
	int i , j = 0;

	while (src[j] != '\0' && j < n)
	{
	dest[i] = src[j];
	j++;
	i++;
	}
	dest[i] = '\0';

	return (dest);
	}
