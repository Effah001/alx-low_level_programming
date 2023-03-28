#include "main.h"
/**
* rev_string - reverse a string
*@s : pointer to an integer to be reversed
* Return: nothing
*/
	void rev_string(char *s)
	{
	int len = 0, i, n;
	char c , g;
		
	while (s[len] != '\0')
	{
	len++;
	}
	
	n = len / 2;
	g = len - 1;

	while ( i != n)
	{
		c = s[i];
		s[i] = s[g - i];
		s[g-i] = c;
		i++;
	}
}
