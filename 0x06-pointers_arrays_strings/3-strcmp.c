#include "main.h"

/**
* _strcmp - compare to strings
*@s1: pointer to a character
*@s2: pointer to a character
* Return: nothing
*/

	int _strcmp(char *s1, char *s2)
	{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
	i++;
	}
	if (s1[i] == s2[i])
	{
	return (0);
	}
	else if (s1[i] > s2[i])
	{
		return (1);
	}
	else
		return (-1);
}
