#include "main.h"
/**
*_strlen - calculate the lenght of a string
*@s : pointer to the string
* Return: length
*/

	int _strlen(char *s)
	{
	int len = 0;

	while (s[len] != '\0')
	{
	len++;
	}
	return (len);
	}
