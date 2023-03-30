#include "main.h"

/**
* replace_with_13th - reverse the numbers in an array
*@s : pointer to a character
* Return: nothing
*/

char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13_alphabet = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

void rot13(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
	int j = 0;
	while (j < 52 && s[i] != alphabet[j])
	{
		j++;
	}
	if (j < 52)
	{
		s[i] = rot13_alphabet[j];
	}
		i++;
	}
}

return (s);
}
