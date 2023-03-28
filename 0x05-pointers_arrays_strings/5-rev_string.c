#include "main.h"
/**
* rev_string - reverse a string
*@s : pointer to an integer to be reversed
* Return: nothing
*/
	void rev_string(char *s)
	{
	int len = 0, 
	int i = 0;
	char c;
		
	while (s[len] != '\0')
	{
	len++;
	}
	

	while ( i < len / 2)
	{
		c = s[i];
		s[i] = s[len - 1 - i];
		s[len -1 -i] = c;
		i++;
	}
}
