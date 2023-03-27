#include "main.h"
/**
* reset_string - reverse a string
*@s : pointer to an integer to be reversed
* Return: nothing
*/
	void rev_string(char *s)
	{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
	len++;
	}

	for (i = 0; i < len / 2; i++)
	{
	char tmp = s[i];

	s[i] = s[len - i - 1];

	s[len - i - 1] = tmp;
	}
}
