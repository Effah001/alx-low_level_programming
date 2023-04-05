#include "main.h" 

int is_palindrome(char * str)
{
	int len = 0;
	
	while (str[len] != '\0')
	{
	len++;
	}
	int x = 0, y = len - 1;
	while (x < y)
	{
	if (str[x] != str[y])
	{
		return 0;
	}
	x++;
	y--;
	}
		return 1;
