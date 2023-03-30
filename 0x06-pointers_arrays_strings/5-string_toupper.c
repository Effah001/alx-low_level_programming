#include "main.h"

/**
* string_toupper - changes lowercase characters to uppercase
*@str : name of the pointer to string
* Return: str
*/


char *string_toupper(char *str)
	{
	int i = 0;

	while (str[i] != '\0')
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - ('a' - 'A');
	}
		i++;
	}
	return (str);
}
