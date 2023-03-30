#include "main.h"

/**
* replace_with_13th - reverse the numbers in an array
*@s : pointer to a character
* Return: nothing
*/

char *rot13(char *s)
	{
	int i = 0;
	char c;

	while (s[i] != '\0')
	{
		c = s[i];
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		c = c + 13;
	}
	else if ((c > 'z') || (c > 'Z'))
	{
		c = c - 26; 
	}
		s[i] = c;
		i++;
	}
return (s);
}
