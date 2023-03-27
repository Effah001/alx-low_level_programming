#include "main.h"
/**
* 2-strlen.c : calculate the lenght of a string
*@s : pointer to the string 
* Return: length
*/

	int _strlen(char *s)
	{
	int len = 0;
	while (str[len] != '\0')
	{
	len++;
	str++;
	}
	return len;
	}	
